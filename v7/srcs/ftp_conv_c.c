/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:19:59 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 16:15:37 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

ssize_t	ftp_conv_c(char c, char *buf, size_t *p_len)
{
	size_t	buf_len;

	buf_len = ft_strlen(buf);
	if ((*p_len + 1) < INT_MAX)
	{
		if (write(1, buf, buf_len) == -1)
			return (-1);
		if (write(1, &c, 1) == -1)
			return (-1);
		*p_len += (buf_len + 1);
		return (2);
	}
	else
		return (-1);
}
