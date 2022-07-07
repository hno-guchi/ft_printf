/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 16:56:47 by hnoguchi         ###   ########.fr       */
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
	ftp_adjust_info_bit_flag_c_s_p(info);
	if (ftp_check_len_cnt(p_len, b_len, ullp_len, info) == -1)
		return (ftp_free_null(&ullp_str));
	if (write(1, buf, b_len) == -1)
		return (ftp_free_null(&ullp_str));
	if ((ullp_len + 2) < (size_t)info->width)
	{
		if (ftp_puts_p(ullp_str, info, ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	}
	else
		if (puts_not_width(ullp_str, ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	(void)ftp_free_null(&ullp_str);
	return (1);
}
