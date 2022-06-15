/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:45:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 10:18:10 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ftp_treat_something(size_t len, int c, va_list args);
int		ftp_count_output(const char *save, va_list args);
void	ftp_putnbr_base(unsigned int nbr, char *base);
char	*ftp_point_base(unsigned long long point, int base);
int		ftp_putstr_count(char *c);
char	*ftp_tolower_all(char *c);
int		ftp_treat_char(char c, size_t len);
int		ftp_treat_hexa(unsigned int i, int f);
int		ftp_treat_int(int i);
int		ftp_treat_point(unsigned long long point);
int		ftp_treat_string(char *str, size_t len);
int		ftp_treat_uint(unsigned long long uint);

#endif
