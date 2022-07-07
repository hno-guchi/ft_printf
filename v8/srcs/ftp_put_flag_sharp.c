/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_put_flag_sharp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:00:36 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/06 13:54:32 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftp_put_flag_sharp(t_fmt_info *info)
{
	if (info->bit_flag & (1 << 0))
	{
		if (info->conversion == 'X')
		{
			if (write(1, "0X", 2) == -1)
				return (-1);
		}
		else
			if (write(1, "0x", 2) == -1)
				return (-1);
		return (2);
	}
	return (0);
}
