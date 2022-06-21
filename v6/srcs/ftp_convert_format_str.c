/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_convert_format_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:26:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/17 15:51:11 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ftp_convert_format_str(char *buf, size_t *b_len, int c, va_list args)
{
	char	*dst;

	if (buf == NULL)
		return (NULL);
	dst = NULL;
	if (c == 'c')
		dst = ftp_conv_c(va_arg(args, int), buf, b_len);
	else if (c == '%')
		dst = ftp_conv_c('%', buf, b_len);
	else if (c == 's')
		dst = ftp_conv_s(va_arg(args, char *), buf, b_len);
	else if (c == 'p')
		dst = ftp_conv_p((unsigned long long)va_arg(args, void *), buf, b_len);
	else if (c == 'd' || c == 'i')
		dst = ftp_conv_d_i(va_arg(args, int), buf, b_len);
	else if (c == 'u')
		dst = ftp_conv_u(va_arg(args, unsigned long long), buf, b_len);
	else if (c == 'x')
		dst = ftp_conv_x(va_arg(args, unsigned int), 'x', buf, b_len);
	else if (c == 'X')
		dst = ftp_conv_x(va_arg(args, unsigned int), 'X', buf, b_len);
	return (dst);
}
