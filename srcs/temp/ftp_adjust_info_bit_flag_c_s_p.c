/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_adjust_info_bit_flag_c_s_p.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:07:49 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 14:36:13 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ftp_adjust_info_bit_flag_c_s_p(t_fmt_info *info)
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
