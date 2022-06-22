/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_parse_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:47:44 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/22 12:16:15 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int		is_flags(const char *flag_set, const char c)
{
	int		bit_flag;
	int		i;
	int		flag_set_len;

	bit_flag = 0;
	i = 0;
	flag_set_len = ft_strlen(flag_set);
	while (i < flag_set_len)
	{
		if (flag_set[i] == c)
			bit_flag |= (1 << i);
		i += 1;
	}
	return (bit_flag);
}

ssize_t	ftp_parse_flags(const char *save, int *flag)
{
	ssize_t	i;

	i = 0;
	if (flag == NULL)
		return (-1);
	while (save[i] != '\0' && ft_strchr("#-+ 0", save[i]) != NULL)
	{
		*flag |= is_flags("#-+ 0", save[i]);
		i += 1;
	}
	if (*flag & (1 << 1))
		*flag &= ~(1 << 4);
	if (*flag & (1 << 2))
		*flag &= ~(1 << 3);
	return (i);
}
