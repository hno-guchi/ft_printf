/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:34:31 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/07 18:33:12 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(void)
{
	ft_putstr_fd("Hello, World!\nis ", 1);
	int	len = (int)ft_strlen_s("Hello, World!\n");
	return (len);
}
