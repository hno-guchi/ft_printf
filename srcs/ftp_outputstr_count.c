/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_outputstr_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/17 18:48:47 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
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
*/

char	*ftp_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i += 1;
	}
	return ((char *)&s[i]);
}

static char	*substr_count(const char *str, size_t *s_len)
{
	char	*percent_p;
	char	*cut_str;

	percent_p = ftp_strchr(str, '%');
	*s_len = percent_p - str;
	cut_str = ft_substr(str, 0, *s_len);
	return (cut_str);
}

static size_t	output_if_small_intmax(char *buf, size_t b_len, size_t p_len)
{
	if ((p_len + b_len) < INT_MAX)
		(void)write(1, buf, b_len);
	(void)ftp_free_null(&buf);
	return (b_len);
}

int	ftp_outputstr_count(const char *save, va_list args, size_t *print_len)
{
	size_t	i;
	size_t	buf_len;
	// size_t	print_len;
	// size_t	move_i;
	char	*buf;

	i = 0;
	// print_len = 0;
	// move_i = 0;
	while (save[i] != '\0')
	{
		buf_len = 0;
		buf = substr_count(&save[i], &buf_len);
		i += buf_len;
		if (save[i] == '%')
			buf = ftp_convert_format_str(buf, &buf_len, save[++i], args);
		if (buf == NULL)
			return (-1);
		*print_len += output_if_small_intmax(buf, buf_len, *print_len);
		if (INT_MAX <= *print_len)
			return (-1);
		if (save[i] != '\0')
			i += 1;
		/*
		if (save[i] == '%')
			move_i = ftp_convert_format_str(buf, &buf_len, save[++i], args);
		if (move_i == -1)
			return (-1);
		i += move_i;
		*print_len += buf_len;
		*/
	}
	return (0);
	// return ((int)print_len);
}
