/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_parse_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:22:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/28 15:24:19 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ftp_prs_wth_count(const char *save, va_list args, t_fmt_info *info)
{
	size_t	i;

	i = 0;
	if (ft_isdigit(save[i]))
	// {
		info->width = ftp_atoi_count(&save[i], &i);
		// if (ft_isdigit(save[i]))
		// 	return (-1);
	// }
	else if (save[i] == '*')
	{
		info->width = va_arg(args, int);
		if (info->width < 0)
		{
			info->bit_flag |= (1 << 1);
			info->width *= -1;
		}
		i += 1;
	}
	// if ((INT_MAX - 1) <= info->width)
	// 	return (-1);
	return (i);
}
