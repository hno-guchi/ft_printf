/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 15:16:20 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_conv_s(char *va_s, char *buf, size_t *b_len)
{
	size_t	v_len;
	char	*dst;

	v_len = 0;
	if (va_s == NULL)
		va_s = "(null)";
	v_len = ft_strlen(va_s);
	dst = ftp_strnjoin(buf, va_s, *b_len, v_len);
	*b_len += v_len;
	return (dst);
}
