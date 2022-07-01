/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_put_flags_plus_space.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:30:08 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/01 20:30:33 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_put_flags_plus_space(t_fmt_info *info)
{
	if (info->bit_flag & (1 << 2))
	{
		if (write(1, "+", 1) == -1)
			return (-1);
	}
	else if (info->bit_flag & (1 << 3))
	{
		if (write(1, " ", 1) == -1)
			return (-1);
	}
	return (1);
}
