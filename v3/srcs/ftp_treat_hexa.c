/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:04:17 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 18:42:08 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftp_treat_hexa(unsigned int i, int f)
{
	char	*hex;
	int		n;

	if (!i)
		i = 0;
	hex = ftp_point_base((unsigned long long)i, 16);
	if (f == 1)
		hex = ftp_str_tolower(hex);
	n = ftp_putstr_count(hex);
	free(hex);
	return (n);
}
