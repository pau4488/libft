/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:51:10 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/01 19:51:10 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memcpy (void *restrict dest, const void *restrict src, size_t n)
{
    size_t  i;

    i = 0;

    if (!dest || !src)
        return (NULL);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    }
    return (dest);
}