/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 18:46:47 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_conv_s(char *va_s, t_fmt_info *info, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	va_len;

	if (va_s == NULL)
		va_s = "(null)";
	buf_len = ft_strlen(buf);
	va_len = ft_strlen(va_s);
	if (info->precision != -1 && (size_t)info->precision < va_len)
			va_len = (size_t)info->precision;
	if (ftp_check_len_count(p_len, buf_len, va_len, (size_t)info->width) == -1)
		return (-1);
	if (va_len < (size_t)info->width)
	{
		if (write(1, buf, buf_len) == -1)
			return (-1);
		if (ftp_puts_format_c_s(va_s, info, (int)va_len) == -1)
			return (-1);
	}
	else
		if (ftp_puts_conv_only(buf, va_s, buf_len, va_len) == -1)
			return (-1);
	return (1);
}
