/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:53:38 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/08 17:37:11 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_treat_int(int i)
{
	char	*str;
	int		n;

	str = ft_itoa(i);
	n = ftp_putstr_count(str);
	free(str);
	return (n);
}
