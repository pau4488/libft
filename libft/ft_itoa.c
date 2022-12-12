/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:50:37 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/12 22:51:21 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_len_magnitude(int n, int *len, int *mag)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*mag = 1;
	while (n / *mag < -9)
	{
		*mag *= 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		mag;
	int		i;
	char	*new;

	ft_len_magnitude(n, &len, &mag);
	new = (char *)malloc(sizeof(char) * (len + 2));
	if (!new)
		return (NULL);
	i = 0;
	if (n < 0)
		new[i++] = '-';
	if (n > 0)
		n = -n;
	while (mag >= 1)
	{
		new[i++] = -((n / mag) % 10) + 48;
		mag /= 10;
	}
	new[i] = '\0';
	return (new);
}
