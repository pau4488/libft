/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:49:01 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/09 00:56:18 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
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