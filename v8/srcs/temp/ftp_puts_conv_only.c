/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_put_conv_only.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:39:21 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/29 17:50:52 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_puts_conv_only(char *buf, char *str, size_t b_len, size_t s_len)
{
	if (write(1, buf, b_len) == -1)
		return (-1);
	if (write(1, str, s_len) == -1)
		return (-1);
	return (1);
}
