/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:58:08 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/09 01:05:07 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *aux;

    i = 0;
    *aux = "";

    if (!s)
        return NULL;
    while (s[i])
    {
        if (s[i] == c)
            return ((char*)(s + i));
        i++;
    }
    if (s[i] == (char)c)
		return ((char*)(s + i));
    
    return NULL;
}