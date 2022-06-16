/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_change_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:35:29 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/08 17:23:57 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static char	*change_base(unsigned long long us, int b, char *r, int c)
{
	while (us != 0)
	{
		if ((us % b) < 10)
			r[c - 1] = (us % b) + '0';
		else
			r[c - 1] = (us % b) + '7';
		us = us / b;
		c -= 1;
	}
	return (r);
}

char	*ftp_point_base(unsigned long long point, int base)
{
	char				*rtn;
	unsigned long long	us;
	int					count;

	count = 0;
	us = point;
	if (point == 0)
		return (ft_strdup("0"));
	while (point != 0)
	{
		point = point / base;
		count += 1;
	}
	rtn = ft_calloc(count + 1, sizeof(char));
	if (rtn == NULL)
		return (NULL);
	rtn = change_base(us, base, rtn, count);
	return (rtn);
}
