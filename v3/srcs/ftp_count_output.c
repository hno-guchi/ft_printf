/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_count_output.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 21:52:14 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ftp_strclen(const char *s, char c)
{
	size_t	len;

	if (s == NULL)
		return (0);
	len = 0;
	while (s[len] != c && s[len] != '\0')
		len += 1;
	return (len);
}

int	ftp_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	buf_len[1];
	size_t	total_len[1];
	char	*buf;

	i = 0;
	buf_len[0] = 0;
	total_len[0] = 0;
	buf = NULL;
	while (save[i] != '\0')
	{
		buf_len[0] = ftp_strclen(&save[i], '%');
		buf = ftp_strndup(&save[i], buf_len[0]);
		if (buf == NULL)
			return (-1);
		i += buf_len[0];
		if (save[i] == '%')
		{
			i += 1;
			buf = ftp_treat_something(buf, buf_len, save[i], args);
			if (buf == NULL)
				return (-1);
		}
		total_len[0] += buf_len[0];
		if (INT_MAX < total_len[0])
		{
			(void)ftp_free_null(&buf);
			return (-1);
		}
		(void)write(1, buf, buf_len[0]);
		(void)ftp_free_null(&buf);
		if (save[i] != '\0')
			i += 1;
	}
	return (total_len[0]);
}
