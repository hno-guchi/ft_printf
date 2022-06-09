/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_putnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:50:23 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/09 12:22:23 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

// static void	change_base_putnbr(int nbr, int type, char *base)
// static void	change_base_putnbr(unsigned long long nbr, int type, char *base)
static void	change_base_putnbr(unsigned int nbr, int type, char *base)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr *= -1;
	}
	// if ((unsigned long long)(type - 1) < nbr)
	if ((unsigned int)(type - 1) < nbr)
	{
		change_base_putnbr(nbr / type, type, base);
		nbr %= type;
	}
	ft_putchar_fd(base[nbr], 1);
	/*
	long long int	number;
	number = (long long int)nbr;
	if (number < 0)
	{
		ft_putchar_fd('-', 1);
		number *= -1;
	}
	if ((type - 1) < number)
	{
		change_base_putnbr(number / type, type, base);
		number %= type;
	}
	ft_putchar_fd(base[number], 1);
	*/
}

// void	ftp_putnbr_base(int nbr, char *base)
// void	ftp_putnbr_base(unsigned long long nbr, char *base)
void	ftp_putnbr_base(unsigned int nbr, char *base)
{
	int	i;
	int	j;
	int	base_type;

	i = 0;
	j = 1;
	base_type = ft_strlen(base);
	if (base_type < 2)
		return ;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (8 < base[i] && base[i] < 14))
			return ;
		while (base[j] != '\0')
		{
			if ((base[i] - base[j]) == 0)
				return ;
			j += 1;
		}
		i += 1;
		j = i + 1;
	}
	change_base_putnbr(nbr, base_type, base);
}

