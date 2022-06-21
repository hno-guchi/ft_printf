/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 16:25:38 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

ssize_t	ftp_conv_s(char *va_s, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	va_len;

	if (va_s == NULL)
		va_s = "(null)";
	buf_len = ft_strlen(buf);
	va_len = ft_strlen(va_s);
	if ((*p_len + va_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (-1);
		if (write(1, va_s, va_len) == -1)
			return (-1);
		*p_len += (buf_len + va_len);
		return (2);
	}
	return (-1);
}
