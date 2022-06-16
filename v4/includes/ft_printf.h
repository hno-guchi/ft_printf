/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:45:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 11:15:27 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *input, ...);

void	ftp_putnbr_base(unsigned int nbr, char *base);
int		ftp_putstr_count(char *c);
char	*ftp_point_base(unsigned long long point, int base);
char	*ftp_ull_itoa_base(unsigned long long ull, int base, size_t *len);
char	*ftp_str_tolower(char *c);
char	*ftp_strnjoin(char *save, char *buff, size_t s_len, size_t b_len);
char	*ftp_strndup(const char *s1, size_t len);
char	*ftp_free_null(char **s);
char	*ftp_itoa_count(int n, size_t *cnt);

int		ftp_count_output(const char *save, va_list args);
char	*ftp_treat_something(char *s, size_t *len, int c, va_list args);
char	*ftp_treat_char(char c, char *s, size_t *len);
char	*ftp_treat_hexa(unsigned int i, int c, char *s, size_t *s_len);
char	*ftp_treat_int(int i, char *s, size_t *s_len);
char	*ftp_treat_point(unsigned long long point, char *bu_s, size_t *b_len);
char	*ftp_treat_string(char *va_s, char *bu_s, size_t *b_len);
char	*ftp_treat_uint(unsigned long long uint, char *s, size_t *s_len);

#endif
