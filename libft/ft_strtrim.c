/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:44:36 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/02/25 01:29:59 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trmd;
	int		len;

	len = ft_strlen(s1);
	trmd = malloc(ft_strlen(s1) * sizeof(char));
	if (!trmd)
		return (NULL);
	while (ft_strchr(set, *s1))
		s1++;
	while (ft_strrchr(set, s1[len - 1]))
		len--;
	if (s1 && len > 0)
		trmd = ft_substr(s1, 0, len);
	if (trmd)
		return (trmd);
	return (NULL);
}
