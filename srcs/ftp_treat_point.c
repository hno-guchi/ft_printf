/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:30 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 19:14:22 by hnoguchi         ###   ########.fr       */
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

// int	ftp_treat_point(unsigned long long point, char bu_s, size_t *b_len)
char	*ftp_treat_point(unsigned long long point, char *bu_s, size_t *b_len)
{
	size_t	p_len;
	char	*p_str;
	char	*buf;

	// p_str = ftp_tolower_all(ftp_ull_itoa_base(point, 16));
	p_len = 0;
	p_str = ftp_ull_itoa_base(point, 16, &p_len);
	if (p_str == NULL)
		return (NULL);
	p_str = ftp_str_tolower(p_str);
	p_str = ftp_str_header_join("0x", p_str, 2, &p_len);
	if (p_str == NULL)
		return (NULL);
	buf = ftp_strnjoin(bu_s, p_str, *b_len, p_len);
	// p_len = ftp_putstr_count("0x");
	// p_len += ftp_putstr_count(p);
	free(p_str);
	*b_len += p_len;
	// return (n);
	return (buf);
}

/*
static char	*change_base(unsigned long long us, int b, char *r, int c)
{
	while (us != 0)
	{
		if ((us % b) < 10)
			r[c - 1] = (us % b) + '0';
		else
			r[c - 1] = (us % b) + '7';
		us = us / b;
		c -= 1;
	}
	return (r);
}

// char	*ftp_point_base(unsigned long long point, int base)
char	*ftp_ull_itoa_base(unsigned long long point, int base)
{
	char				*rtn;
	unsigned long long	us;
	int					count;

	count = 0;
	us = point;
	if (point == 0)
		return (ft_strdup("0"));
	while (point != 0)
	{
		point = point / base;
		count += 1;
	}
	rtn = ft_calloc(count + 1, sizeof(char));
	if (rtn == NULL)
		return (NULL);
	rtn = change_base(us, base, rtn, count);
	return (rtn);
}

char	*ftp_tolower(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		c[i] = ft_tolower(c[i]);
		i += 1;
	}
	return (c);
}

int	ftp_treat_point(unsigned long long point)
{
	char	*p;
	int		n;

	p = ftp_tolower_all(ftp_point_base(point, 16));
	n = ftp_putstr_count("0x");
	n += ftp_putstr_count(p);
	free(p);
	return (n);
}
*/
