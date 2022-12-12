/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:16:47 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/12 02:10:30 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (dest[cont] != '\0')
		cont++;
	if (n != 0)
	{
		cont++;
		while (cont < n)
		{
			dest[cont] = src[i];
			i++;
			cont++;
		}
		dest [cont] = '\0';
	}
	return (cont);
}
