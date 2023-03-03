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

char	ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(n + '0');
	str = malloc(len * sizeof(char));
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	ft_itoa(n / 10);
	str[i] =
	return (str);
}

//Passar per Python C debugger online
/*-----------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void itoa(int n, char *str) {
    int i, sign;
    if ((sign = n) < 0) {
        n = -n;
    }
    i = 0;
    do {
        str[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
        str[i++] = '-';
    }
    str[i] = '\0';
    reverse(str);
}

int main() {
    int num = -123;
    char str[12];
    itoa(num, str);
    printf("The integer %d is converted to string %s\n", num, str);
    return 0;
}
-----------------------------------------------------------------------*/