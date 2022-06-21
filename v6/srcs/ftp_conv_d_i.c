/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_conv_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:53:38 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 15:15:55 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_conv_d_i(int i, char *buf, size_t *b_len)
{
	char	*dst;
	char	*nbr;
	size_t	n_len;

	n_len = 0;
	nbr = ftp_itoa_count(i, &n_len);
	if (nbr == NULL)
		return (ftp_free_null(&buf));
	dst = ftp_strnjoin(buf, nbr, *b_len, n_len);
	(void)ftp_free_null(&nbr);
	*b_len += n_len;
	return (dst);
}
