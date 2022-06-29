/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 21:20:06 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static char	*join_header_str(char *head, char *str, size_t h_len, size_t s_len)
{
	char	*dst;

	dst = (char *)malloc((h_len + s_len + 1) * sizeof(char));
	if (dst == NULL)
	{
		(void)ftp_free_null(&str);
		return (NULL);
	}
	(void)ft_memmove(dst, head, h_len);
	(void)ft_memmove(&dst[h_len], str, s_len + 1);
	(void)ftp_free_null(&str);
	return (dst);
}

static char	*create_ull_p_str(unsigned long long ull_p, size_t *len)
{
	char				*ull_p_str;

	ull_p_str = ftp_ull_itoa_base(ull_p, 16, len);
	if (ull_p_str == NULL)
		return (NULL);
	ull_p_str = join_header_str("0x", ull_p_str, 2, *len);
	if (ull_p_str == NULL)
		return (NULL);
	ull_p_str = ftp_str_tolower(ull_p_str);
	*len += 2;
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
	if (ftp_check_len_count(p_len, b_len, ullp_len, (size_t)info->width) == -1)
		return (ftp_free_null(&ullp_str));
	if (ullp_len < (size_t)info->width)
	{
		if (write(1, buf, b_len) == -1)
			return (ftp_free_null(&ullp_str));
		if (ftp_puts_format_c_s(ullp_str, info, (int)ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	}
	else
		if (ftp_puts_conv_only(buf, ullp_str, b_len, ullp_len) == -1)
			return (ftp_free_null(&ullp_str));
	(void)ftp_free_null(&ullp_str);
	return (1);
}
