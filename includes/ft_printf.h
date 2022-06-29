/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:45:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 21:21:09 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

# define CONVERSIONS "csdiupxX%"

typedef struct s_fmt_info
{
	int	bit_flag;
	int	width;
	int	precision;
	int	conversion;
}	t_fmt_info;

int		ft_printf(const char *input, ...) __attribute__((format(printf, 1, 2)));
int		ftp_print_count(const char *save, va_list args, size_t *print_len);
ssize_t	ftp_puts_cnt(const char *save, va_list args, char *buf, size_t *p_len);
ssize_t	ftp_puts_not_conversion_count(char *buf, size_t *p_len);
int		ftp_cmd_puts(va_list args, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_c(char c, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_s(char *va_s, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_check_len_count(size_t *p, size_t buf, size_t va, size_t w);
int		ftp_puts_conv_only(char *buf, char *str, size_t b_len, size_t s_len);
int		ftp_puts_format_c_s(char *str, t_fmt_info *info, int len);
int		ftp_puts_has_width_only(char *str, t_fmt_info *info, int len);
int		ftp_conv_p(void *point, t_fmt_info *info, char *buf, size_t *p_len);
ssize_t	ftp_conv_d_i(int i, char *buf, size_t *p_len);
ssize_t	ftp_conv_u(unsigned long long uint, char *buf, size_t *p_len);
ssize_t	ftp_conv_x(unsigned int i, int c, char *buf, size_t *p_len);
size_t	ftp_prs_fmt_count(const char *save, va_list args, t_fmt_info *info);
int		ftp_is_flags_count(const char *flag_set, const char c, size_t *index);
size_t	ftp_prs_wth_count(const char *save, va_list args, t_fmt_info *info);
size_t	ftp_prs_prec_count(const char *save, va_list args, t_fmt_info *info);
ssize_t	ftp_free_null(char **s);
// char	*ftp_strndup(const char *s1, size_t len);
// char	*ftp_strnjoin(char *save, char *buff, size_t s_len, size_t p_len);
int		ftp_atoi_count(const char *str, size_t *digit);
char	*ftp_itoa_count(int n, size_t *cnt);
char	*ftp_ull_itoa_base(unsigned long long ull, int base, size_t *len);
char	*ftp_str_tolower(char *c);

#endif
