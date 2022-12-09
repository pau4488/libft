/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:37:47 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/09 04:09:41 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int nlen;
    int aux;

    i = 0;
    j = 0;
    aux = 0;
    nlen = 0;

    if (!needle)
        return (haystack);
    nlen = ft_strlen(needle);
    while(i < len && j < nlen)
    {
        if (needle[i] == haystack[i])
        {
            if (aux == 0)
                aux = i;
            j++;
        }
        else
            aux = 0;
            j = 0;
        i++;
    }
    if (j == nlen)
        return ((char *)haystack[aux]);
    return NULL;
}