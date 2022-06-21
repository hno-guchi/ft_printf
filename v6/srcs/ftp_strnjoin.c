/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_strnjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:26:18 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 17:52:23 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_strnjoin(char *save, char *buff, size_t s_len, size_t b_len)
{
	char	*dst;

	if (buff == NULL)
		return (ftp_free_null(&save));
	dst = (char *)malloc((s_len + b_len + 1) * sizeof(char));
	if (dst == NULL)
		return (ftp_free_null(&save));
	(void)ft_memmove(dst, save, s_len);
	(void)ft_memmove(&dst[s_len], buff, b_len + 1);
	(void)ftp_free_null(&save);
	return (dst);
}
