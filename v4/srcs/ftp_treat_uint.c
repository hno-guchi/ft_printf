/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:57:13 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 10:57:30 by hnoguchi         ###   ########.fr       */
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

char	*ftp_treat_uint(unsigned long long uint, char *s, size_t *s_len)
{
	char	*dst;
	char	*u_nbr;
	size_t	u_len;

	u_len = 0;
	u_nbr = unsigned_itoa_count((unsigned int)uint, &u_len);
	if (u_nbr == NULL)
		return (ftp_free_null(&s));
	dst = ftp_strnjoin(s, u_nbr, *s_len, u_len);
	(void)ftp_free_null(&u_nbr);
	*s_len += u_len;
	return (dst);
}

