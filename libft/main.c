#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char *dest;
    char prova[100] = "Hola Buenas que tal";
    char *src;
    char prova2[100] = "Adeu que vagi be";
    char *dest1;
    char *src1;

    dest = prova;
    src = prova2;
    src1 = src;
    dest1 = dest;

    // len = ft_strlen(s);
    // printf("ft_strlen: %zu\n", len);
    // len = strlen(s);
    // printf("strlen: %zu\n", len);

    memmove(dest, src, 100);
    printf("memmove:\nsrc: %s\ndest: %s\n", src, dest);
    ft_memmove(dest1, src1, 100);
    printf("ft_memmove:\nsrc: %s\ndest: %s\n", src, dest);

    return 0;
}