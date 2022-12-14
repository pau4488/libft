/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:09:01 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/14 19:47:34 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if(ft_isupper || ft_islower)
		return(1);
	return(0);
}

int	ft_isupper(int c)
{
	if(c >= 65 && c <= 90)
		return(1);
	return(0);
}

int	ft_islower(int c)
{
	if(c >= 97 && c <= 122)
		return(1);
	return(0);
}