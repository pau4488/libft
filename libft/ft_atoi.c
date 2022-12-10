/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:28:44 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/10 21:38:48 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int ft_atoi(const char *str)
{
	int	flag;

	flag = 1;

    while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			flag = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		
		str++;
	}
}

static int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (TRUE);
	return (FALSE);
}

static int	ft_issign(int c)
{
	if (c == '+' || c == '-')
		return (TRUE);
	return (FALSE);
}