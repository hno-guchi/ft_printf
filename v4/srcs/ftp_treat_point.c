/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 21:51:04 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"


static char	*ftp_str_header_join(char *head, char *buff, size_t h_len, size_t *b_len)
{
	char	*dst;

	if (head == NULL)
		return (ftp_free_null(&buff));
	dst = (char *)ft_calloc(h_len + *b_len + 1, sizeof(char));
	if (dst == NULL)
		return (ftp_free_null(&buff));
	(void)ft_memmove(dst, head, h_len);
	(void)ft_memmove(&dst[h_len], buff, *b_len + 1);
	(void)ftp_free_null(&buff);
	*b_len += h_len;
	return(dst);

}

char	*ftp_treat_point(unsigned long long point, char *bu_s, size_t *b_len)
{
	size_t	p_len;
	char	*p_str;
	char	*buf;

	p_len = 0;
	p_str = ftp_ull_itoa_base(point, 16, &p_len);
	if (p_str == NULL)
		return (NULL);
	p_str = ftp_str_tolower(p_str);
	p_str = ftp_str_header_join("0x", p_str, 2, &p_len);
	if (p_str == NULL)
		return (NULL);
	buf = ftp_strnjoin(bu_s, p_str, *b_len, p_len);
	free(p_str);
	*b_len += p_len;
	return (buf);
}
