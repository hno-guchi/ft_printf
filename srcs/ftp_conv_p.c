/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 18:02:46 by hnoguchi         ###   ########.fr       */
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

ssize_t	ftp_conv_p(unsigned long long point, char *buf, size_t *p_len)
{
	size_t	point_len;
	size_t	buf_len;
	char	*point_str;

	point_len = 0;
	buf_len = ft_strlen(buf);
	point_str = ftp_ull_itoa_base(point, 16, &point_len);
	if (point_str == NULL)
		return (-1);
	point_str = ftp_str_tolower(point_str);
	if ((*p_len + point_len + 2) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&point_str));
		if (write(1, "0x", 2) == -1)
			return (ftp_free_null(&point_str));
		if (write(1, point_str, point_len) == -1)
			return (ftp_free_null(&point_str));
		*p_len += (buf_len + point_len + 2);
		(void)ftp_free_null(&point_str);
		return (2);
	}
	return (ftp_free_null(&point_str));
}
