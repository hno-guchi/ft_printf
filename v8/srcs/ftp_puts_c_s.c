/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_c_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/06 21:24:13 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_nflag_minus(char *str, t_fmt_info *info, size_t s_len)
{
	if ((0 < info->width) && (info->bit_flag & (1 << 4)))
		if (ftp_puts_character('0', (size_t)info->width - s_len) == -1)
			return (-1);
	if (write(1, str, s_len) == -1)
		return (-1);
	return (1);
}

int	ftp_puts_c_s(char *str, t_fmt_info *info, size_t s_len)
{
	if (info->bit_flag & (1 << 1))
	{
		if (write(1, str, s_len) == -1)
			return (-1);
		if ((0 < info->width) && !(info->bit_flag & (1 << 4)))
			if (ftp_puts_character(' ', (size_t)info->width - s_len) == -1)
				return (-1);
	}
	else
	{
		if ((0 < info->width) && !(info->bit_flag & (1 << 4)))
			if (ftp_puts_character(' ', (size_t)info->width - s_len) == -1)
				return (-1);
		if (puts_nflag_minus(str, info, s_len) == -1)
			return (-1);
	}
	return (1);
}
