/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:45:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/07/05 21:48:57 by hnoguchi         ###   ########.fr       */
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
int		ftp_scanning_count(const char *save, va_list args, size_t *print_len);
ssize_t	ftp_chk_has(const char *save, va_list args, char *buf, size_t *p_len);
ssize_t	ftp_puts_not_conversion_count(char *buf, size_t *p_len);
int		ftp_is_flags_count(const char *flag_set, const char c, size_t *index);
size_t	ftp_prs_fmt_count(const char *save, va_list args, t_fmt_info *info);
size_t	ftp_prs_wth_count(const char *save, va_list args, t_fmt_info *info);
size_t	ftp_prs_prec_count(const char *save, va_list args, t_fmt_info *info);
int		ftp_slt_conv(va_list args, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_c(char c, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_percent(char c, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_s(char *va_s, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_p(void *point, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_d_i(int i, t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_conv_u(unsigned long long uint,
			t_fmt_info *info, char *buf, size_t *p_len);
int		ftp_check_len_cnt(size_t *p, size_t buf, size_t va, t_fmt_info *info);
int		ftp_puts_c_s(char *str, t_fmt_info *info, size_t len);
int		ftp_puts_d_i(char *str, t_fmt_info *ifo, size_t in, size_t ptn);
int		ftp_puts_p(char *str, t_fmt_info *ifo, size_t un, size_t ptn);
int		ftp_puts_u(char *str, t_fmt_info *ifo, size_t un, size_t ptn);
int		ftp_put_flags_plus_space(t_fmt_info *info);
ssize_t	ftp_puts_character(char c, size_t len);
// ssize_t	ftp_conv_u(unsigned long long uint, char *buf, size_t *p_len);
ssize_t	ftp_conv_x(unsigned int i, int c, char *buf, size_t *p_len);
ssize_t	ftp_free_null(char **s);
int		ftp_atoi_count(const char *str, size_t *digit);
char	*ftp_itoa_count(int n, size_t *cnt);
char	*ftp_ull_itoa_base(unsigned long long ull, int base, size_t *len);
char	*ftp_str_tolower(char *c);

#endif
