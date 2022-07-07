#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		bit_flags = 0;
	ssize_t	move_i = 0;
	char	*bit_flags_str;
	size_t	temp = 0;
	move_i = ftp_parse_flags("#-+ 0", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[1] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", "#-+ 0", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);

	bit_flags = 0;
	move_i = 0;
	bit_flags_str;
	temp = 0;
	move_i = ftp_parse_flags("#", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[2] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", "#", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);

	bit_flags = 0;
	move_i = 0;
	*bit_flags_str;
	temp = 0;
	move_i = ftp_parse_flags("-", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[3] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", "-", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);

	bit_flags = 0;
	move_i = 0;
	*bit_flags_str;
	temp = 0;
	move_i = ftp_parse_flags("+", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[4] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", "+", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);
	
	bit_flags = 0;
	move_i = 0;
	*bit_flags_str;
	temp = 0;
	move_i = ftp_parse_flags(" ", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[4] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", " ", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);
	
	bit_flags = 0;
	move_i = 0;
	*bit_flags_str;
	temp = 0;
	move_i = ftp_parse_flags("0", &bit_flags);
	bit_flags_str = ftp_ull_itoa_base(bit_flags, 2, &temp);
	printf("[5] [%s] | bit_flags = [%d] = [%s] | move_i = [%zu]\n", "0", bit_flags, bit_flags_str, move_i);
	free(bit_flags_str);

	return (0);
}
