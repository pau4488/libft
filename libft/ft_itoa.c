/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:52:14 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/03/03 10:52:14 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(100 * sizeof(char));
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	else if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	while ((n / 10) > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	if (n > 0)
		str[i++] = n + '0';
	str[i] = '\0';
	return (ft_strrev(str));
}

static char	*ft_strrev(char *str)
{
	char	temp;
	size_t	i;
	size_t	j;

	temp = ' ';
	i = 0;
	j = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	while (i < ft_strlen(str) - 1 && i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
