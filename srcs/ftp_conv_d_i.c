/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:53:38 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 18:03:31 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
static ssize_t	free_null_wrapper(char *str)
{
	(void)ftp_free_null(&str);
	return (-1);
}
*/

ssize_t	ftp_conv_d_i(int i, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	char	*i_str;

	buf_len = ft_strlen(buf);
	i_str = ftp_itoa_count(i, &i_len);
	if (i_str == NULL)
		return (-1);
	if ((*p_len + i_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if (write(1, i_str, i_len) == -1)
			return (ftp_free_null(&i_str));
		*p_len += (buf_len + i_len);
		(void)ftp_free_null(&i_str);
		return (2);
	}
	return (ftp_free_null(&i_str));
}
