/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_treat_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:56 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/10 17:26:14 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ftp_treat_string(char *str, size_t len)
{
	int		n;

	if (str == NULL)
		str = "(null)";
	n = ft_strlen(str);
	if (INT_MAX <= (len + n))
		return (-1);
	(void)write(1, str, n);
	return (n);
}
