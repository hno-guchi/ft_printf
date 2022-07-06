/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:53:38 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/30 15:02:11 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
void	check_flags(int i, t_fmt_info *info)
{
	if (i < 0)
		info->
}
*/
/*
static char	*add_precision_zero(char *i_str, t_fmt_info *info, size_t *i_len)
{
	int		i;
	int		zero_digits;
	char	*dst;

	i = 0;
	zero_digits = info->precision - (int)*i_len;
	dst = (char *)ft_calloc(info->precision + 1, sizeof(char));
	if (dst == NULL)
	{
		free(i_str);
		return (NULL);
	}
	if (i_str[0] == '-')
	{
		dst[i] = '-';
		i += 1;
	}
	ft_memset(&dst[i], '0', zero_digits);
	*i_len = ft_strlcat(dst, &i_str[i], (size_t)info->precision + 1);
	free(i_str);
	return (dst);
}
*/
char	*add_precision_zero(char *i_str, int info, size_t *i_len)
{
	int		i;
	int		zero_digits;
	char	*dst;

	i = 0;
	dst = (char *)ft_calloc(info + 1, sizeof(char));
	if (dst == NULL)
	{
		free(i_str);
		return (NULL);
	}
	if (i_str[0] == '-')
	{
		dst[0] = '-';
		i += 1;
		zero_digits = info - (int)*i_len + 1;
	}
	else
		zero_digits = info - (int)*i_len;
	(void)ft_memset(&dst[i], '0', zero_digits);
	*i_len = ft_strlcat(dst, &i_str[i], (size_t)info + 1);
	free(i_str);
	return (dst);
}
#include <stdio.h>
int	main(void)
{
	int		info = 10;

	char		*res_str1;
	char		*i_str1 = ft_strdup("-12345");
	size_t		len1 = 6;
	res_str1 = add_precision_zero(i_str1, info, &len1);
	printf("str = [%s] | len = [%d] <===> [%.10d]\n", res_str1, len1, -12345);
	free(res_str1);
	
	char		*res_str2;
	char		*i_str2 = ft_strdup("0");
	size_t		len2 = 1;
	res_str2 = add_precision_zero(i_str2, info, &len2);
	printf("str = [%s] | len = [%d] <===> [%.10d]\n", res_str2, len2, 0);
	free(res_str2);

	char		*res_str3;
	char		*i_str3 = ft_strdup("12345");
	size_t		len3 = 5;
	res_str3 = add_precision_zero(i_str3, info, &len3);
	printf("str = [%s] | len = [%d] <===> [%.10d]\n", res_str3, len3, 12345);
	free(res_str3);
	return (0);
}

/*
static char	*itoa_count(int i, t_fmt_info *info, size_t *i_len)
{
	char	*i_str;

	i_str = ftp_itoa_count(i, i_len);
	if (i_str == NULL)
		return (NULL);
	if (i_len < (size_t)info->precision)
		i_str = add_precision_zero(i_str, info, i_len);
	if (i_str == NULL)
		return (NULL);
	return (i_str);
}

int	ftp_conv_d_i(int i, t_fmt_info *info, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	char	*i_str;

	buf_len = ft_strlen(buf);
	// i_str = ftp_itoa_count(i, &i_len);
	i_str = itoa_count(i, info, &i_len);
	// check_flags(i, info);
	if (i_str == NULL)
		return (-1);
	// if (ftp_check_len_count(p_len, buf_len, i_len, (size_t)info->width) == -1)
	// 	return (ftp_free_null(&i_str));
	if (i_len < (size_t)info->width)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if ()
	}
	else
		if (ftp_puts_conv_only(buf, va_s, buf_len, va_len) == -1)
			return (-1);
	return (1);
	if ((*p_len + i_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if (write(1, i_str, i_len) == -1)
			return (ftp_free_null(&i_str));
		*p_len += (buf_len + i_len);
		(void)ftp_free_null(&i_str);
		return (2);
	}
	return (ftp_free_null(&i_str));
}
*/


/*
ssize_t	ftp_conv_d_i(int i, char *buf, size_t *p_len)
{
	size_t	buf_len;
	size_t	i_len;
	char	*i_str;

	buf_len = ft_strlen(buf);
	i_str = ftp_itoa_count(i, &i_len);
	if (i_str == NULL)
		return (-1);
	if ((*p_len + i_len) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (ftp_free_null(&i_str));
		if (write(1, i_str, i_len) == -1)
			return (ftp_free_null(&i_str));
		*p_len += (buf_len + i_len);
		(void)ftp_free_null(&i_str);
		return (2);
	}
	return (ftp_free_null(&i_str));
}
*/
