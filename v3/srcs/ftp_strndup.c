/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_strndup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:35:40 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 17:37:32 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_strndup(const char *s1, size_t len)
{
	char	*temp;

	temp = (char *)ft_calloc(len + 1, sizeof(char));
	if (temp == NULL)
		return (NULL);
	(void)ft_strlcpy(temp, s1, len + 1);
	return (temp);
}
