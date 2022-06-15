/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_putstr_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:08:33 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/08 17:35:30 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_putstr_count(char *c)
{
	int	n;

	if (c == NULL)
		return (0);
	n = ft_strlen(c);
	ft_putstr_fd(c, 1);
	return (n);
}
