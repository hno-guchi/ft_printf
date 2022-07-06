/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_parse_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:27:06 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/28 15:24:21 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ftp_prs_prec_count(const char *save, va_list args, t_fmt_info *info)
{
	size_t	i;

	i = 0;
	if (save[i] == '.')
	{
		i += 1;
		if (ft_isdigit(save[i]))
		// {
			info->precision = ftp_atoi_count(&save[i], &i);
			//  while (ft_isdigit(save[i]))
			//  	i += 1;
		// }
		else if (save[i] == '*')
		{
			info->precision = va_arg(args, int);
			i += 1;
		}
		else
			info->precision = 0;
	}
	return (i);
}
