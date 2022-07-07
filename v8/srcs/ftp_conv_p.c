/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 21:42:30 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_not_width(char *str, size_t in, size_t ptn)
{
	size_t	puts_prec_len;

	puts_prec_len = 0;
	if (in < ptn)
	{
		puts_prec_len = ptn - in;
		if (write(1, "0x", 2) == -1)
			return (-1);
		if (ftp_puts_character('0', puts_prec_len) == -1)
			return (-1);
		if (write(1, str, (ptn - puts_prec_len)) == -1)
			return (-1);
	}
	else
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		if (write(1, str, in) == -1)
			return (-1);
	}
	return (1);
}

static size_t	adjust_info_puts_len(t_fmt_info *info, void *p, size_t *ul_len)
{
	size_t	puts_len;

	puts_len = 0;
	if ((info->precision != -1) && (*ul_len < (size_t)info->precision))
		puts_len = (size_t)info->precision;
	else if (p == NULL && info->precision == 0)
	{
		puts_len = 0;
		*ul_len = 0;
	}
	else
		puts_len = *ul_len;
	return (puts_len);
}

static char	*create_ull_p_str(unsigned long long ull_p, size_t *len)
{
	char				*ull_p_str;

	ull_p_str = ftp_ull_itoa_base(ull_p, 16, len);
	if (ull_p_str == NULL)
		return (NULL);
	ull_p_str = ftp_str_tolower(ull_p_str);
	return (ull_p_str);
}

int	ftp_conv_p(void *point, t_fmt_info *info, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	ullp_len;
	size_t	puts_len;
	char	*ullp_str;

	buf_len = ft_strlen(buf);
	ullp_str = create_ull_p_str((unsigned long long)point, &ullp_len);
	if (ullp_str == NULL)
		return (-1);
	puts_len = adjust_info_puts_len(info, point, &ullp_len);
	if (ftp_check_len_cnt(p_len, buf_len, puts_len, info) == -1)
		return (ftp_free_null(&ullp_str));
	if (write(1, buf, buf_len) == -1)
		return (ftp_free_null(&ullp_str));
	if ((puts_len + 2) < (size_t)info->width)
	{
		if (ftp_puts_p(ullp_str, info, ullp_len, puts_len) == -1)
			return (ftp_free_null(&ullp_str));
	}
	else
		if (puts_not_width(ullp_str, ullp_len, puts_len) == -1)
			return (ftp_free_null(&ullp_str));
	(void)ftp_free_null(&ullp_str);
	return (1);
}
