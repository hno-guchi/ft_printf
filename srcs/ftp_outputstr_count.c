/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_outputstr_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 20:14:10 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static size_t	str_c_len(const char *s, char c)
{
	size_t	len;

	if (s == NULL)
		return (0);
	len = 0;
	while (s[len] != c && s[len] != '\0')
		len += 1;
	return (len);
}

static char	*strndup_count(const char *str, size_t *s_len)
{
	char	*dst;

	*s_len = str_c_len(str, '%');
	dst = ftp_strndup(str, *s_len);
	return (dst);
}

static size_t	output_check_overflow(char *buf, size_t b_len, size_t p_len)
{
	if ((p_len + b_len) < INT_MAX)
		(void)write(1, buf, b_len);
	(void)ftp_free_null(&buf);
	return (b_len);
}

int	ftp_outputstr_count(const char *save, va_list args)
{
	size_t	i;
	size_t	buf_len;
	size_t	print_len;
	char	*buf;

	i = 0;
	print_len = 0;
	while (save[i] != '\0')
	{
		buf_len = 0;
		buf = strndup_count(&save[i], &buf_len);
		i += buf_len;
		if (save[i] == '%')
			buf = ftp_check_convs(buf, &buf_len, save[++i], args);
		if (buf == NULL)
			return (-1);
		print_len += output_check_overflow(buf, buf_len, print_len);
		if (INT_MAX <= print_len)
			return (-1);
		if (save[i] != '\0')
			i += 1;
	}
	return ((int)print_len);
}
