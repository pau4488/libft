/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:54:47 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/02/10 01:47:39 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int	out;
	int	ptr;
	int	i;

	out = 0;
	ptr = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (!ft_isdigit(nptr[i]) && nptr[i] != 43 && nptr[i] != 45)
		return (0);
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		ptr = i;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		out = out * 10 + nptr[i] - '0';
		i++;
	}
	if (nptr[ptr] == '-')
		out = out * (-1);
	return (out);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}
