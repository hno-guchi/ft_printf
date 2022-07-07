/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_has_width_only.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:51:16 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/01 11:19:30 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_puts_has_width_only(char *str, t_fmt_info *info, int len)
{
	int	i;

	i = 0;
	while (i < (info->width - len))
	{
		if (write(1, " ", 1) == -1)
			return (-1);
		i += 1;
	}
	if (write(1, str, len) == -1)
		return (-1);
	return (1);
}
