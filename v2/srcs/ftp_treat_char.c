/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:19:59 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 09:51:40 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// int	ftp_treat_char(char *s, char c, size_t *len)
int	ftp_treat_char(char c, size_t len)
{
	int	n;

	n = -1;
	if ((len + 1) < INT_MAX)
		n = write(1, &c, 1);
	return (n);
	/*
	char	*buf;

	buf = ftp_strnjoin(s, &c, len, 1);
	if (buf == NULL)
		return (-1);
	*/
}
