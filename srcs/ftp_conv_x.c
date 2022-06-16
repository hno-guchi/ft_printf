/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:04:17 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 15:16:46 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ftp_conv_x(unsigned int i, int c, char *buf, size_t *b_len)
{
	char	*dst;
	char	*hex;
	size_t	h_len;

	if (!i)
		i = 0;
	hex = ftp_ull_itoa_base((unsigned long long)i, 16, &h_len);
	if (hex == NULL)
		return (ftp_free_null(&buf));
	if (c == 'x')
		hex = ftp_str_tolower(hex);
	dst = ftp_strnjoin(buf, hex, *b_len, h_len);
	(void)ftp_free_null(&hex);
	*b_len += h_len;
	return (dst);
}
