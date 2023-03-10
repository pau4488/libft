/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:44:36 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/03/10 01:10:58 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trmd;
	int		len;

	len = ft_strlen(s1);
	trmd = malloc(ft_strlen(s1) * sizeof(char));
	if (!trmd || !s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (len > 0 && ft_strrchr(set, s1[len - 1]))
		len--;
	trmd = ft_substr(s1, 0, len);
	return (trmd);
}
