/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:34:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/17 18:39:26 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *input, ...)
{
	int			error_flag;
	size_t		print_len;
	const char	*save;
	va_list		args;

	error_flag = 0;
	print_len = 0;
	save = ft_strdup(input);
	if (save == NULL)
		return (-1);
		// return (0);
	va_start(args, input);
	error_flag = ftp_outputstr_count(save, args, &print_len);
	va_end(args);
	free((char *)save);
	if (error_flag == -1)
		return (error_flag);
	return ((int)print_len);
}

/*
#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	int		res = 0;
	int		ft_res = 0;

	// segmentation fault
	// res = printf(NULL);
	// ft_res = ft_printf(NULL);

	// %c = 0, %s = NULL
	printf("\n--- [1] printf(\"\");--------\n");
	printf("   printf() = ["); res = printf(""); printf("]\n");
	printf("ft_printf() = ["); ft_res = ft_printf(""); printf("]\n");
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [2] %%c, 0--------\n");
	res = printf("   printf() = [%c]\n", '0');
	ft_res = ft_printf("ft_printf() = [%c]\n", '0');
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [3] %%s, NULL--------\n");
	res = printf("   printf() = [%s]\n", NULL);
	ft_res = ft_printf("ft_printf() = [%s]\n", NULL);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [4] %%u, -4--------\n");
	res = printf("   printf() = [%u]\n", -4);
	ft_res = ft_printf("ft_printf() = [%u]\n", -4);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	// Output char Over INT_MAX
	char	*intmax_str;
	intmax_str = (char *)calloc(INT_MAX - 15, sizeof(char));
	intmax_str = memset(intmax_str, 'A', INT_MAX - 16);

	printf("\n--- [5] %%s, size = [INTMAX - 16]--------\n");
	res = printf("\n   printf%s%s]", "() = [", intmax_str);
	ft_res = ft_printf("\nft_printf%s[%s]", "() = [", intmax_str);
	printf("\n   res = [%d]\nft_res = [%d]\n", res, ft_res);
	
	printf("\n--- [6] %%u, LONG_MAX --------\n");
	res = printf("   printf(); = [%u]\n", LONG_MAX);
	ft_res = ft_printf("ft_printf(); = [%u]\n", LONG_MAX);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [7] %%u, LONG_MIN --------\n");
	res = printf("   printf(); = [%u]\n", LONG_MIN);
	ft_res = ft_printf("ft_printf(); = [%u]\n", LONG_MIN);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [8] %%u, UINT_MAX --------\n");
	res = printf("   printf(); = [%u]\n", UINT_MAX);
	ft_res = ft_printf("ft_printf(); = [%u]\n", UINT_MAX);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [9] %%u, ULONG_MAX --------\n");
	res = printf("   printf(); = [%u]\n", ULONG_MAX);
	ft_res = ft_printf("ft_printf(); = [%u]\n", ULONG_MAX);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [10] %%u, U9223372036854775807LL --------\n");
	res = printf("   printf(9223372036854775807LL); = [%u]\n",
		9223372036854775807LL);
	ft_res = ft_printf("ft_printf(9223372036854775807LL); = [%u]\n",
		9223372036854775807LL);
	printf("   res = [%d]\nft_res = [%d]\n", res, ft_res);

	printf("\n--- [11] %%u, all test --------\n");
	printf(" %u %u %u %u %u %u %u \n",
			INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %u %u %u %u %u %u %u \n",
			INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	free(intmax_str);
	system("leaks a.out");
    return (0);
}
*/
