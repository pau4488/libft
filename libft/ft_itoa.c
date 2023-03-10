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

static char *ft_strrev(char *str);

char	*ft_itoa(int n)
{
    char    *str;
    int     i;

    i = 0;
    str = malloc(100 * sizeof(char));
	if (n < 0)
    {
        str[i] = '-';
        i++;
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
        str[i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    if (n > 0)
        str[i++] = n + '0';
    str[i] = '\0';
    return (ft_strrev(str));
}

static char *ft_strrev(char *str)
{
    char    temp;
    size_t     i;
    size_t     j;

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