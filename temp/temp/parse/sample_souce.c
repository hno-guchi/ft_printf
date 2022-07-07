#include "sample.h"

void	check_parse_format(t_fmt_info info)
{
	if (((info->bit_flag & (1 << 1)) || -1 < info->precision) && info->conversion != '%')
		info->bit_flag &= ~(1 << 4);
	if (info->bit_flag & (1 << 2))
		info->but_flag &= ~(1 << 3);
	return ;
}

void	parse_width_precision(const char c, va_list args, t_fmt_info info)
{
	if (c == '*')
	{
		if (info->precision == -1)
			info->width = va_arg(args, int);
		else
			info->precision = va_arg(args, int);
		if (info->width < 0)
		{
			info->bit_flag |= (1 << 1);
			info->width *= -1;
		}
	}
	else
	{
		if (info->precision == -1)
			info->width = (info->width * 10) + (c - '0');
		else
			info->precision = (info->precision * 10) + (c - '0');
	}
	return ;
}

void	parse_format(const char c, va_list args, t_fmt_info info)
{
	if (c == '#')
		info->bit_flag |= (1 << 0);
	else if (c == '-')
		info->bit_flag |= (1 << 1);
	else if (c == '+')
		info->bit_flag |= (1 << 2);
	else if (c == ' ')
		info->bit_flag |= (1 << 3);
	else if (c == '0' && info->width == 0 && info->precision == -1)
		info->bit_flag |= (1 << 4);
	else if (c == '.')
		info->precision = 0;
	else if (ft_isdigit(c) || c == '*')
		parse_width_precision(c, args, info);
	return ;
}

void	initialize_format_info(t_fmt_info info)
{
	info->bit_flag = 0;
	info->width = 0;
	info->precision = -1;
	info->conversion = 0;
}

ssize_t	ftp_parse_format(const char *save, va_list args, t_fmt_info *info)
{
	size_t			i;
	// t_fmt_info		*format_info;

	i = 1;
	// format_info = (t_format_info *)malloc(1 * sizeof(t_format_info));
	// if (format_info == NULL)
	//	return (-1);
	initialize_format_info(info);
	while (save[i] != '\0' && !ft_strchr(CONVERSIONS, save[i]))
	{
		parse_format(save[i], args, info);
		i += 1;
	}
	info->conversion = save[i];
	check_parse_format(info);
	return (i);
}

void	check_function_printf(const char *input, ...)
{
	ssize_t		move_i;
	const char	*save;
	va_list		args;
	t_fmt_info	*format_info;

	save = strdup(input);
	format_info = (t_format_info *)malloc(1 * sizeof(t_format_info));
	if (save == NULL || format_info == NULL)
		return (-1);
	va_start(args, input);
	move_i = ftp_parse_format(save, args, format_info);
	va_end(args);
	printf("\n----- save[%s] -----\n", save);
	printf("move_i     = [%d]\n", move_i);
	printf("bit_flag   = [%d]\n", format_info->bit_flag);
	printf("width      = [%d]\n", format_info->width);
	printf("precision  = [%d]\n", format_info->precision);
	printf("conversion = [%c]\n", (char)format_info->conversion);
	printf("----------------------\n");
	free((char *)save);
}

int	main(void)
{
	check_function_printf("%c");
}
