/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:04:17 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/06 14:21:29 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	puts_not_width(char *i_str,
		t_fmt_info *info, size_t i_len, size_t puts_len)
{
	size_t	puts_prec_len;

	puts_prec_len = 0;
	if (i_len < puts_len)
	{
		puts_prec_len = puts_len - i_len;
		if (ftp_put_flag_sharp(info) == -1)
			return (-1);
		if (ftp_puts_character('0', puts_prec_len) == -1)
			return (-1);
		if (write(1, i_str, (puts_len - puts_prec_len)) == -1)
			return (-1);
	}
	else
	{
		if (ftp_put_flag_sharp(info) == -1)
			return (-1);
		if (write(1, i_str, i_len) == -1)
			return (-1);
	}
	return (1);
}

int	puts_x(char *i_str, t_fmt_info *info, size_t i_len, size_t puts_len)
{
	size_t	sharp_len;

	sharp_len = 0;
	if (info->bit_flag & (1 << 0))
		sharp_len = 2;
	if (info->conversion == 'x')
		i_str = ftp_str_tolower(i_str);
	if ((puts_len + sharp_len) < (size_t)info->width)
	{
		if (ftp_fputs_x(i_str, info, i_len, puts_len) == -1)
			return (-1);
	}
	else
		if (puts_not_width(i_str, info, i_len, puts_len) == -1)
			return (-1);
	return (1);
}

static size_t	adjust_info_puts_len(t_fmt_info *info,
		unsigned int i, size_t *i_len)
{
	size_t	puts_len;

	puts_len = 0;
	if (i == 0)
		info->bit_flag &= ~(1 << 0);
	if ((info->precision != -1) && (*i_len < (size_t)info->precision))
		puts_len = (size_t)info->precision;
	else if (i == 0 && info->precision == 0)
	{
		puts_len = 0;
		*i_len = 0;
	}
	else
		puts_len = *i_len;
	return (puts_len);
}

int	ftp_conv_x(unsigned int i, t_fmt_info *info, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	size_t	puts_len;
	char	*i_str;

	if (!i)
		i = 0;
	buf_len = ft_strlen(buf);
	i_str = ftp_ull_itoa_base((unsigned long long)i, 16, &i_len);
	if (i_str == NULL)
		return (-1);
	puts_len = adjust_info_puts_len(info, i, &i_len);
	if (ftp_check_len_cnt(p_len, buf_len, puts_len, info) == -1)
		return (ftp_free_null(&i_str));
	if (write(1, buf, buf_len) == -1)
		return (ftp_free_null(&i_str));
	if (puts_x(i_str, info, i_len, puts_len) == -1)
		return (ftp_free_null(&i_str));
	(void)ftp_free_null(&i_str);
	return (1);
}

/*
ssize_t	ftp_conv_x(unsigned int i, int c, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	char	*i_str;

	if (!i)
		i = 0;
	buf_len = ft_strlen(buf);
	i_str = ftp_ull_itoa_base((unsigned long long)i, 16, &i_len);
	if (i_str == NULL)
		return (-1);
	if (c == 'x')
		i_str = ftp_str_tolower(i_str);
	if ((*p_len + i_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if (write(1, i_str, i_len) == -1)
			return (ftp_free_null(&i_str));
		(void)ftp_free_null(&i_str);
		*p_len += (buf_len + i_len);
		return (2);
	}
	return (ftp_free_null(&i_str));
}
*/
