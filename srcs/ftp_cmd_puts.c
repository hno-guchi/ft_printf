/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_cmd_puts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:51:51 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 21:19:16 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_cmd_puts(va_list args, t_fmt_info *info, char *buf, size_t *p_len)
{
	int	error_flag;

	error_flag = 0;
	if (info->conversion == 'c')
		error_flag = ftp_conv_c(va_arg(args, int), info, buf, p_len);
	else if (info->conversion == '%')
		error_flag = ftp_conv_c('%', info, buf, p_len);
	else if (info->conversion == 's')
		error_flag = ftp_conv_s(va_arg(args, char *), info, buf, p_len);
	else if (info->conversion == 'p')
		error_flag = ftp_conv_p(va_arg(args, void *), info, buf, p_len);
/*
	else if (info->conversion == 'd' || info->conversion == 'i')
		error_flag = ftp_conv_d_i(va_arg(args, int), info, fmt_len);
	else if (info->conversion == 'u')
		error_flag = ftp_conv_u(va_arg(args, unsigned long long), info, fmt_len);
	else if (info->conversion == 'x')
		error_flag = ftp_conv_x(va_arg(args, unsigned int), 'x', info, fmt_len);
	else if (info->conversion == 'X')
		error_flag = ftp_conv_x(va_arg(args, unsigned int), 'X', info, fmt_len);
*/
	return (error_flag);
}

/*
	// if ([0] != '%')
	// 	move_i += ftp_not_conversions(buf, p_len);
	if (info->conversion == 'c')
		format_str = ftp_conv_c(va_arg(args, int), info, fmt_len);
	else if (info->conversion == '%')
		move_i += ftp_conv_c('%', buf, p_len);
	else if (info->conversion == 's')
		move_i += ftp_conv_s(va_arg(args, char *), buf, p_len);
	else if (info->conversion == 'p')
		move_i += ftp_conv_p((unsigned long long)va_arg(args, void *), buf, p_len);
	else if (save[0] == '%' && (save[1] == 'd' || save[1] == 'i'))
		move_i += ftp_conv_d_i(va_arg(args, int), buf, p_len);
	else if (info->conversion == 'u')
		move_i += ftp_conv_u(va_arg(args, unsigned long long), buf, p_len);
	else if (info->conversion == 'x')
		move_i += ftp_conv_x(va_arg(args, unsigned int), 'x', buf, p_len);
	else if (info->conversion == 'X')
		move_i += ftp_conv_x(va_arg(args, unsigned int), 'X', buf, p_len);
	return (move_i);
*/

