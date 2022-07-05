/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:57:13 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 21:43:08 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_not_width(char *str, size_t in, size_t ptn)
{
	size_t	puts_prec_len;

	puts_prec_len = 0;
	if (in < ptn)
	{
		puts_prec_len = ptn - in;
		// if (write(1, "0x", 2) == -1)
		// 	return (-1);
		if (ftp_puts_character('0', puts_prec_len) == -1)
			return (-1);
		if (write(1, str, (ptn - puts_prec_len)) == -1)
			return (-1);
	}
	else
	// {
		// if (write(1, "0x", 2) == -1)
		// 	return (-1);
		if (write(1, str, in) == -1)
			return (-1);
	// }
	return (1);
}

static size_t	adjust_info_puts_len(t_fmt_info *info, size_t *ui_len)
{
	size_t	puts_len;

	puts_len = 0;
	if ((info->precision != -1) && (*ui_len < (size_t)info->precision))
		puts_len = (size_t)info->precision;
	/*
	else if (p == NULL && info->precision == 0)
	{
		puts_len = 0;
		*ul_len = 0;
	}
	*/
	else
		puts_len = *ui_len;
	return (puts_len);
}

static char	*unsigned_itoa_count(unsigned int n, size_t *len)
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
	*len = digit;
	while (0 < digit)
	{
		digit -= 1;
		str[digit] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	ftp_conv_u(unsigned long long uint,
		t_fmt_info *info, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	uint_len;
	size_t	puts_len;
	char	*uint_str;

	(void)info;
	buf_len = ft_strlen(buf);
	// uint_len = 0;
	uint_str = unsigned_itoa_count((unsigned int)uint, &uint_len);
	if (uint_str == NULL)
		return (-1);
	puts_len = adjust_info_puts_len(info, &uint_len);
	if (ftp_check_len_cnt(p_len, buf_len, puts_len, info) == -1)
		return (ftp_free_null(&uint_str));
	if (write(1, buf, buf_len) == -1)
		return (ftp_free_null(&uint_str));
	if ((puts_len + 2) < (size_t)info->width)
	{
		if (ftp_puts_u(uint_str, info, uint_len, puts_len) == -1)
			return (ftp_free_null(&uint_str));
	}
	else
		if (puts_not_width(uint_str, uint_len, puts_len) == -1)
			return (ftp_free_null(&uint_str));
	(void)ftp_free_null(&uint_str);
	return (1);
}

/*
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
*/
