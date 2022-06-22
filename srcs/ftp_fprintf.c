/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_fprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:26:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/22 12:18:40 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

ssize_t	ftp_fprintf(const char *save, va_list args, char *buf, size_t *p_len)
{
	ssize_t	move_i;
	int		bit_flag;
	size_t	width_pre_digit[2];
	char	*fmt_str;

	(void)args;
	move_i = 0;
	bit_flag = 0;
	width_pre_digit[0] = 0;
	width_pre_digit[1] = 0;
	fmt_str = NULL;
	if (save[0] != '%')
		move_i = ftp_not_conversions(buf, p_len);
	else
	{
		move_i = ftp_parse_flags(save, &bit_flag);
		move_i += ftp_parse_width_precision(&save[move_i], width_pre_digit);
		// fmt_str = ftp_create_format_string(args, bit_flag, w_d_digit);
		if (fmt_str == NULL)
			return (-1);
		// if (!write_smaller_intmax(buf, fmt_str, p_len))
		// 	return (ftp_free_null(fmt_str));
	}
	return (move_i);
}

/*
ssize_t	ftp_fprintf(const char *save, va_list args, char *buf, size_t *p_len)
{
	ssize_t	move_i;

	move_i = 0;
	if (save[0] != '%')
		move_i += ftp_not_conversions(buf, p_len);
	else if (save[0] == '%' && save[1] == 'c')
		move_i += ftp_conv_c(va_arg(args, int), buf, p_len);
	else if (save[0] == '%' && save[1] == '%')
		move_i += ftp_conv_c('%', buf, p_len);
	else if (save[0] == '%' && save[1] == 's')
		move_i += ftp_conv_s(va_arg(args, char *), buf, p_len);
	else if (save[0] == '%' && save[1] == 'p')
		move_i += ftp_conv_p((unsigned long long)va_arg(args, void *), buf, p_len);
	else if (save[0] == '%' && (save[1] == 'd' || save[1] == 'i'))
		move_i += ftp_conv_d_i(va_arg(args, int), buf, p_len);
	else if (save[0] == '%' && save[1] == 'u')
		move_i += ftp_conv_u(va_arg(args, unsigned long long), buf, p_len);
	else if (save[0] == '%' && save[1] == 'x')
		move_i += ftp_conv_x(va_arg(args, unsigned int), 'x', buf, p_len);
	else if (save[0] == '%' && save[1] == 'X')
		move_i += ftp_conv_x(va_arg(args, unsigned int), 'X', buf, p_len);
	return (move_i);
}
*/
