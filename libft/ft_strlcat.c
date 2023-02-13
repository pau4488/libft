/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:23:36 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/01/26 21:13:03 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;
	int		j;

	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	while (dstsize != 0 && (--dstsize - i) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (c);
}
