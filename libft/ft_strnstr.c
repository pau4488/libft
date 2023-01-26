/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:19:03 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/01/26 10:19:03 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while (i < len && little[j] != '\0')
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == (ft_strlen(little)))
		return (&((char *)big)[i - j]);
	return (NULL);
}
