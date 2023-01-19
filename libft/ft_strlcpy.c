/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:15:50 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/01/19 23:55:51 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int c;
	unsigned int i;

	i = 0;
	c = ft_strlen(src);
	while (i < (dstsize - 1) && src[i] =! '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}
