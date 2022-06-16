/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:53:38 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/16 10:36:16 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_treat_int(int i, char *s, size_t *s_len)
{
	char	*dst;
	char	*nbr;
	size_t	nbr_len;

	nbr_len = 0;
	nbr = ftp_itoa_count(i, &nbr_len);
	if (nbr == NULL)
		return (ftp_free_null(&s));
	dst = ftp_strnjoin(s, nbr, *s_len, nbr_len);
	(void)ftp_free_null(&nbr);
	*s_len += nbr_len;
	return (dst);
}
