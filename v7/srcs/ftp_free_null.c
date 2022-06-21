/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_free_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:43:52 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/06/21 17:56:48 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// char	*ftp_free_null(char **s)
ssize_t	ftp_free_null(char **s)
{
	if (s[0] != NULL)
	{
		free(s[0]);
		s[0] = NULL;
	}
	return (-1);
	// return (NULL);
}
