/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:34:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 19:15:17 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			num;

	num = 0;
	save = ft_strdup(input);
	if (save == NULL)
		return (0);
	va_start(args, input);
	num = ftp_outputstr_count(save, args);
	va_end(args);
	free((char *)save);
	return (num);
}
