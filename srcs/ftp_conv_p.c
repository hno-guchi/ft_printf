/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/01 22:13:32 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_not_width(char *str, size_t s_len)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (write(1, str, s_len) == -1)
		return (-1);
	return (1);
}

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

static int	ftp_puts_c_s_p(char *str, t_fmt_info *info, size_t len)
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
	size_t				ullp_len;
	size_t				b_len;
	char				*ullp_str;

	ullp_len = 0;
	b_len = ft_strlen(buf);
	ullp_str = create_ull_p_str((unsigned long long)point, &ullp_len);
	if (ullp_str == NULL)
		return (-1);
	if (info->precision != -1 && (size_t)info->precision < ullp_len)
			ullp_len = (size_t)info->precision;
	ftp_adjustment_info_bit_flag(info);
	if (ftp_check_len_cnt(p_len, b_len, ullp_len, info) == -1)
		return (ftp_free_null(&ullp_str));
	if (write(1, buf, b_len) == -1)
		return (ftp_free_null(&ullp_str));
	if ((ullp_len + 2) < (size_t)info->width)
	{
		if (ftp_puts_c_s_p(ullp_str, info, ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	}
	else
		if (puts_not_width(ullp_str, ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	(void)ftp_free_null(&ullp_str);
	return (1);
}
