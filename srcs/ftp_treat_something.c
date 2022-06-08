/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_something.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:26:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/08 19:55:35 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftp_treat_something(int c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ftp_treat_char(va_arg(args, int));
	else if (c == 's')
		n = ftp_treat_string(va_arg(args, char *));
	else if (c == 'p')
		n = ftp_treat_point((unsigned long long)va_arg(args, void *));
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
	return (n);
}
