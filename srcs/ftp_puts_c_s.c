/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_c_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/01 22:01:49 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_has_not_flag(char *str, t_fmt_info *info, size_t len)
{
	if (ftp_puts_character(' ', (size_t)info->width - len) == -1)
		return (-1);
	if (write(1, str, len) == -1)
		return (-1);
	return (1);
}

static int	puts_has_flags_minus_zero(char *str, t_fmt_info *info, size_t len)
{
	size_t	puts_width_len;

	puts_width_len = (size_t)info->width - len;
	if (info->bit_flag & (1 << 1))
	{
		if (write(1, str, len) == -1)
			return (-1);
		if (ftp_puts_character(' ', puts_width_len) == -1)
			return (-1);
	}
	else if (info->bit_flag & (1 << 4))
	{
		if (ftp_puts_character('0', puts_width_len) == -1)
			return (-1);
		if (write(1, str, len) == -1)
			return (-1);
	}
	return (1);
}

int	ftp_puts_c_s(char *str, t_fmt_info *info, size_t len)
{
	if ((info->bit_flag & (1 << 1)) || (info->bit_flag & (1 << 4)))
	{
		if (puts_has_flags_minus_zero(str, info, len) == -1)
			return (-1);
	}
	else
		if (puts_has_not_flag(str, info, len) == -1)
			return (-1);
	return (1);
}
