/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_adjustment_info_bit_flag.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:07:49 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/01 10:52:14 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ftp_adjustment_info_bit_flag(t_fmt_info *info)
{
	char	conversion;
	
	conversion = info->conversion;
	if (ft_strchr("csp", conversion) != NULL)
	{
		if (conversion != 'p' && info->bit_flag & (1 << 0))
			info->bit_flag &= ~(1 << 0);
		if (info->bit_flag & (1 << 2))
			info->bit_flag &= ~(1 << 2);
		if (info->bit_flag & (1 << 3))
			info->bit_flag &= ~(1 << 3);
	}
	if (conversion == 'p')
			info->bit_flag |= (1 << 0);
	return ;
}
