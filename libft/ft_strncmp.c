/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:44:57 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/09 02:08:28 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;

    while(s1[i] == s2[i])
    {
        if(s1[i] == s2[i] && s1[i] == '\0')
            return (0);
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}