/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:23:36 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/01/20 01:05:13 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	newsize;
	size_t	i;
	int		j;

	c = ft_strlen(dst) + ft_strlen(src);
	newsize = dstsize - ft_strlen(dst) - 1;
	i = 0;
	j = 0;
	if (dstsize != 0 && ft_strlen(dst) < dstsize)
	{
		i = ft_strlen(dst);
		while (i < (dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	else
		return (c);
}
