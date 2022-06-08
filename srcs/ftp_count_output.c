/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_count_output.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/08 18:30:39 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (save[i] != '\0')
	{
		if (save[i] == '%')
		{
			i += 1;
			c += ftp_treat_something(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			c += 1;
		}
		i += 1;
		if (save[i] == '\0')
			return (c);
	}
	return (c);
}
