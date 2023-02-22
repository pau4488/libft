/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:01:10 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/02/22 00:04:57 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		slen;

	slen = ft_strlen(s) + 1;
	dup = malloc(slen * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, slen);
	return (dup);
}
