/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_format_c_s.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:38:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 18:51:10 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_has_flags(char *str, t_fmt_info *info, int len)
{
	int	i;

	i = info->width - len + 1;
	if (info->bit_flag & (1 << 1))
	{
		if (write(1, str, len) == -1)
			return (-1);
		while (0 < --i)
			if (write(1, " ", 1) == -1)
				return (-1);
	}
	else if (info->bit_flag & (1 << 4))
	{
		while (0 < --i)
			if (write(1, "0", 1) == -1)
				return (-1);
		if (write(1, str, len) == -1)
			return (-1);
	}
	return (1);
}

int	ftp_puts_format_c_s(char *str, t_fmt_info *info, int len)
{
	if ((info->bit_flag & (1 << 1)) || (info->bit_flag & (1 << 4)))
	{
		if (puts_has_flags(str, info, len) == -1)
			return (-1);
	}
	else
	{
		if (ftp_puts_has_width_only(str, info, len) == -1)
			return (-1);
	}
	return (1);
}
