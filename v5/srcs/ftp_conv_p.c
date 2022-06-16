/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 15:22:17 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static char	*str_header_join(char *head, char *str, size_t h_len, size_t *s_len)
{
	char	*dst;

	if (head == NULL)
		return (ftp_free_null(&str));
	dst = (char *)ft_calloc(h_len + *s_len + 1, sizeof(char));
	if (dst == NULL)
		return (ftp_free_null(&str));
	(void)ft_memmove(dst, head, h_len);
	(void)ft_memmove(&dst[h_len], str, *s_len + 1);
	(void)ftp_free_null(&str);
	*s_len += h_len;
	return (dst);
}

char	*ftp_conv_p(unsigned long long point, char *buf, size_t *b_len)
{
	size_t	p_len;
	char	*p_str;
	char	*dst;

	p_len = 0;
	p_str = ftp_ull_itoa_base(point, 16, &p_len);
	if (p_str == NULL)
		return (ftp_free_null(&buf));
	p_str = ftp_str_tolower(p_str);
	p_str = str_header_join("0x", p_str, 2, &p_len);
	if (p_str == NULL)
		return (NULL);
	dst = ftp_strnjoin(buf, p_str, *b_len, p_len);
	(void)ftp_free_null(&p_str);
	*b_len += p_len;
	return (dst);
}
