/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:16:22 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/02 12:17:21 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_has_not_flag(char *str, t_fmt_info *info, size_t len)
{
	if (ftp_puts_character(' ', (size_t)info->width - len - 2) == -1)
		return (-1);
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (write(1, str, len) == -1)
		return (-1);
	return (1);
}

static int	puts_has_flags_minus_zero(char *str, t_fmt_info *info, size_t len)
{
	int	puts_width_len;

	puts_width_len = info->width - len - 2;
	if (info->bit_flag & (1 << 1))
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		if (write(1, str, len) == -1)
			return (-1);
		if (ftp_puts_character(' ', puts_width_len) == -1)
			return (-1);
	}
	else if (info->bit_flag & (1 << 4))
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		if (ftp_puts_character('0', puts_width_len) == -1)
			return (-1);
		if (write(1, str, len) == -1)
			return (-1);
	}
	return (1);
}

int	ftp_puts_p(char *str, t_fmt_info *info, size_t len)
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
