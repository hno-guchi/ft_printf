/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:19:59 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 13:17:28 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// int	ftp_treat_char(char c, size_t len)
char	*ftp_treat_char(char c, char *s, size_t *len)
{
	char	*buf;

	buf = ftp_strnjoin(s, &c, *len, 1);
	*len += 1;
	return (buf);
	/*
	int	n;

	n = -1;
	if ((len + 1) < INT_MAX)
		n = write(1, &c, 1);
	return (n);
	*/
}
