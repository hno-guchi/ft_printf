/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:45:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/22 18:59:08 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...) __atribute__((format(printf,1,2)));
int		ftp_outputstr_count(const char *save, va_list args, size_t *print_len);
ssize_t	ftp_fprintf(const char *save, va_list args, char *buf, size_t *p_len);
ssize_t	ftp_not_conversions(char *buf, size_t *p_len);
ssize_t	ftp_conv_c(char c, char *buf, size_t *p_len);
ssize_t	ftp_conv_s(char *va_s, char *buf, size_t *p_len);
ssize_t	ftp_conv_p(unsigned long long point, char *buf, size_t *p_len);
ssize_t	ftp_conv_d_i(int i, char *buf, size_t *p_len);
ssize_t	ftp_conv_u(unsigned long long uint, char *buf, size_t *p_len);
ssize_t	ftp_conv_x(unsigned int i, int c, char *buf, size_t *p_len);
ssize_t	ftp_free_null(char **s);
// char	*ftp_strndup(const char *s1, size_t len);
// char	*ftp_strnjoin(char *save, char *buff, size_t s_len, size_t p_len);
ssize_t	ftp_parse_flags(const char *save, int *flag);
char	*ftp_itoa_count(int n, size_t *cnt);
char	*ftp_ull_itoa_base(unsigned long long ull, int base, size_t *len);
char	*ftp_str_tolower(char *c);
// char	*ftp_free_null(char **s);

#endif
