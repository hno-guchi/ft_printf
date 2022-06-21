/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:04:17 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 18:05:02 by hnoguchi         ###   ########.fr       */
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

ssize_t	ftp_conv_x(unsigned int i, int c, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	char	*i_str;

	if (!i)
		i = 0;
	buf_len = ft_strlen(buf);
	i_str = ftp_ull_itoa_base((unsigned long long)i, 16, &i_len);
	if (i_str == NULL)
		return (-1);
	if (c == 'x')
		i_str = ftp_str_tolower(i_str);
	if ((*p_len + i_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if (write(1, i_str, i_len) == -1)
			return (ftp_free_null(&i_str));
		(void)ftp_free_null(&i_str);
		*p_len += (buf_len + i_len);
		return (2);
	}
	return (ftp_free_null(&i_str));
}
