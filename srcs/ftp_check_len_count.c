/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_check_len_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:36:45 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 18:47:55 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_check_len_count(size_t *p, size_t buf, size_t va, size_t w)
{
	if (va < w)
	{
		if ((INT_MAX - 1) <= (*p + buf + w))
			return (-1);
		*p += buf + w;
	}
	else
	{
		if ((INT_MAX - 1) <= (*p + buf + va))
			return (-1);
		*p += buf + va;
	}
	return (1);
}
