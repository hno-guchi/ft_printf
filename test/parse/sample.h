#ifndef SAMPLE_H
# define SAMPLE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

#define CONVERSIONS "csdiupxX%"

typedef struct	s_fmt_info
{
	int	bit_flag;
	int	width;
	int	precision;
	int	conversion;
}	t_fmt_info;


int		ftp_atoi_count(const char *str, size_t *digit);
int		ftp_is_flags_count(const char *flag_set, const char c, size_t *index);
size_t	ftp_parse_precision(const char *save, va_list args, t_fmt_info *info);
size_t	ftp_parse_width(const char *save, va_list args, t_fmt_info *info);
#endif
