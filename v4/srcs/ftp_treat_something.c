/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_something.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:26:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 11:17:19 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ftp_treat_something(char *s, size_t *len, int c, va_list args)
{
	char	*buf;

	buf = NULL;
	if (c == 'c')
		buf = ftp_treat_char(va_arg(args, int), s, len);
	else if (c == '%')
		buf = ftp_treat_char('%', s, len);
		// n = ftp_putstr_count("%");
	else if (c == 's')
		buf = ftp_treat_string(va_arg(args, char *), s, len);
	else if (c == 'p')
		buf = ftp_treat_point((unsigned long long)va_arg(args, void *), s, len);
	else if (c == 'd' || c == 'i')
		buf = ftp_treat_int(va_arg(args, int), s, len);
	else if (c == 'u')
		buf = ftp_treat_uint(va_arg(args, unsigned long long), s, len);
	else if (c == 'x')
		buf = ftp_treat_hexa(va_arg(args, unsigned int), 'x', s, len);
	else if (c == 'X')
		buf = ftp_treat_hexa(va_arg(args, unsigned int), 'X', s, len);
	return (buf);
}
