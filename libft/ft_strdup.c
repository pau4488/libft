/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:01:10 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/02/13 20:01:10 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		n;

	n = ft_strlen(s);
	n++;
	dup = malloc(n * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n);
	return (dup);
}
