/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:04:17 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 11:15:09 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ftp_treat_hexa(unsigned int i, int c, char *s, size_t *s_len)
{
	char	*dst;
	char	*hex;
	size_t	h_len;

	if (!i)
		i = 0;
	hex = ftp_ull_itoa_base((unsigned long long)i, 16, &h_len);
	if (hex == NULL)
		return (ftp_free_null(&s));
	if (c == 'x')
		hex = ftp_str_tolower(hex);
	dst = ftp_strnjoin(s, hex, *s_len, h_len);
	(void)ftp_free_null(&hex);
	*s_len += h_len;
	return (dst);
}
