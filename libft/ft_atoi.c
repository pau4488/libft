/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:54:47 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/01/26 12:54:47 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	out;

	out = 0;
	if (!ft_isdigit(nptr[i]) && nptr[i] != 43 && nptr[i] != 45)
		return (0);
	while (nptr[i] >= 0 && nptr[i] <= 9)
	{

		return (0)
	}
	if (nptr[0] == '-')
		out = out * (-1);
	retrun (out);
}
