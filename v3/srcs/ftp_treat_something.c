/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_something.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:26:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 21:51:25 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ftp_treat_something(char *s, size_t *len, int c, va_list args)
{
	size_t	n;
	char	*buf;

	n = 0;
	buf = NULL;
	if (c == 'c')
		buf = ftp_treat_char(va_arg(args, int), s, len);
	else if (c == 's')
		buf = ftp_treat_string(va_arg(args, char *), s, len);
	else if (c == 'p')
		buf = ftp_treat_point((unsigned long long)va_arg(args, void *), s, len);
	else if (c == 'd' || c == 'i')
		n = ftp_treat_int(va_arg(args, int));
	else if (c == 'u')
		n = ftp_treat_uint((unsigned long long)va_arg(args, unsigned long long));
	else if (c == 'x')
		n = ftp_treat_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		n = ftp_treat_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
		n = ftp_putstr_count("%");
	(void)n;
	return (buf);
}
