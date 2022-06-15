/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 13:30:20 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// int	ftp_treat_string(char *str, size_t len)
char	*ftp_treat_string(char *va_s, char *bu_s, size_t *b_len)
{
	size_t	v_len;
	char	*buf;

	v_len = 0;
	if (va_s == NULL)
		va_s = "(null)";
	v_len = ft_strlen(va_s);
	buf = ftp_strnjoin(bu_s, va_s, *b_len, v_len);
	*b_len += v_len;
	return (buf);
}

/*
	int		n;

	if (str == NULL)
		str = "(null)";
	n = ft_strlen(str);
	if (INT_MAX <= (len + n))
		return (-1);
	(void)write(1, str, n);
	return (n);
	*/

