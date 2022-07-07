/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puts_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:16:22 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 19:28:26 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_precision_str(char *str, size_t in, ssize_t sgn, size_t ptn)
{
	size_t	puts_prec_len;

	puts_prec_len = ptn - in;
	if (ftp_puts_character('0', puts_prec_len) == -1)
		return (-1);
	if (write(1, str, (ptn - sgn - puts_prec_len)) == -1)
		return (-1);
	return (1);
}

static int	puts_nflag_minus(char *str, t_fmt_info *ifo, size_t in, size_t ptn)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if ((0 < ifo->width) && (ifo->bit_flag & (1 << 4)))
		if (ftp_puts_character('0', (size_t)ifo->width - 2 - in) == -1)
			return (-1);
	if (in < ptn)
	{
		if (puts_precision_str(str, in, 0, ptn) == -1)
			return (-1);
	}
	else
		if (write(1, str, in) == -1)
			return (-1);
	return (1);
}

static int	puts_flag_minus(char *str, size_t in, size_t ptn)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (in < ptn)
	{
		if (puts_precision_str(str, in, 0, ptn) == -1)
			return (-1);
	}
	else
		if (write(1, str, in) == -1)
			return (-1);
	return (1);
}

int	ftp_puts_p(char *str, t_fmt_info *ifo, size_t un, size_t ptn)
{
	if (ifo->bit_flag & (1 << 1))
	{
		if (puts_flag_minus(str, un, ptn) == -1)
			return (-1);
		if ((0 < ifo->width) && !(ifo->bit_flag & (1 << 4)))
			if (ftp_puts_character(' ',
					(size_t)ifo->width - 2 - ptn) == -1)
				return (-1);
	}
	else
	{
		if ((0 < ifo->width) && !(ifo->bit_flag & (1 << 4)))
			if (ftp_puts_character(' ',
					(size_t)ifo->width - 2 - ptn) == -1)
				return (-1);
		if (puts_nflag_minus(str, ifo, un, ptn) == -1)
			return (-1);
	}
	return (1);
}
