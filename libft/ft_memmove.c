/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:05:29 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/12 01:46:14 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*srccpy;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	srccpy = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = srccpy[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[n - 1] = srccpy[n - 1];
			n--;
		}
	}
	return (dest);
}
