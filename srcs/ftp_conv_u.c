/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:57:13 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 18:01:47 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static char	*unsigned_itoa_count(unsigned int n, size_t *cnt)
{
	char			*str;
	unsigned int	tmp;
	size_t			digit;

	tmp = n;
	digit = 1;
	while (9 < tmp)
	{
		tmp /= 10;
		digit += 1;
	}
	str = (char *)ft_calloc(digit + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digit] = '\0';
	*cnt = digit;
	while (0 < digit)
	{
		digit -= 1;
		str[digit] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/*
static ssize_t	free_null_wrapper(char *str)
{
	(void)ftp_free_null(&str);
	return (-1);
}
*/

ssize_t	ftp_conv_u(unsigned long long uint, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	uint_len;
	char	*uint_str;

	buf_len = ft_strlen(buf);
	uint_len = 0;
	uint_str = unsigned_itoa_count((unsigned int)uint, &uint_len);
	if (uint_str == NULL)
		return (-1);
	if ((*p_len + uint_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&uint_str));
		if (write(1, uint_str, uint_len) == -1)
			return (ftp_free_null(&uint_str));
		*p_len += (buf_len + uint_len);
		(void)ftp_free_null(&uint_str);
		return (2);
	}
	return (ftp_free_null(&uint_str));
}
