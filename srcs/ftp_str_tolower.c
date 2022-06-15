/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_tolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:14:44 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/15 18:41:03 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ftp_str_tolower(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		c[i] = ft_tolower(c[i]);
		i += 1;
	}
	return (c);
}