/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:57:13 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/09 12:22:34 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftp_treat_uint(unsigned long long uint)
{
	int	n;

	n = 0;
	// n = put_unbr_count(uint, 1);
	// n = put_unbr_count(uint);
	ftp_putnbr_base((unsigned int)uint, "0123456789");
	return (n);
}

/*
static int	put_unbr_count(unsigned long long n)
{
	char				str;
	unsigned long long	tmp;
	size_t				t;

	tmp = n;
	t = 0;
	while (9 < tmp)
	{
		tmp = tmp / 10;
		t += 1;
	}
	if (9 < n)
		put_unbr_count(n / 10);
	// str = '0' + n % 10;
	str = (n % 10) + '0';
	write(1, &str, 1);
	return (t+1);
}
*/
