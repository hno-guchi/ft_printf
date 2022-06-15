/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_count_output.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:18:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 10:17:16 by hnoguchi         ###   ########.fr       */
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

char	*ftp_strndup(const char *s1, size_t len)
{
	char	*temp;

	temp = (char *)ft_calloc(len + 1, sizeof(char));
	if (temp == NULL)
		return (NULL);
	(void)ft_strlcpy(temp, s1, len + 1);
	return (temp);
}

void	ftp_free_null(char **s)
{
	if (s[0] != NULL)
		free(s[0]);
	s[0] = NULL;
	return ;
}

int	ftp_count_output(const char *save, va_list args)
{
	size_t	i;
	int		buf_len;
	size_t	total_len;
	char	*buf;

	i = 0;
	buf_len = 0;
	total_len = 0;
	buf = NULL;

	while (save[i] != '\0')
	{
		buf_len = ftp_strclen(&save[i], '%');
		if (buf_len == -1)
			return (-1);
		buf = ftp_strndup(&save[i], buf_len);
		if (buf == NULL)
			return (-1);
		if ((total_len + buf_len) < INT_MAX)
			(void)write(1, buf, buf_len);
		ftp_free_null(&buf);
		i += buf_len;
		total_len += buf_len;
		if (save[i] == '%')
		{
			i += 1;
			buf_len = ftp_treat_something(total_len, save[i], args);
			if (buf_len == -1)
				return (-1);
			total_len += buf_len;
		}
		if (save[i] != '\0')
			i += 1;
	}
	return (total_len);
}
