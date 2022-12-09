#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    dest[100] = "Hola Buenas que tal";
    char    src[100] = "Adeu que vagi be";
    char    *destcpy;
    char    *srccpy;
    char    *aux;
    char    *aux2;

    srccpy = src;
    destcpy = dest;
    aux2 = "Hello World!";

    // len = ft_strlen(s);
    // printf("ft_strlen: %zu\n", len);
    // len = strlen(s);
    // printf("strlen: %zu\n", len);

    // memmove(dest, src, 100);
    // printf("memmove:\nsrc: %s\ndest: %s\n", src, dest);
    // ft_memmove(dest1, src1, 100);
    // printf("ft_memmove:\nsrc: %s\ndest: %s\n", src, dest);

    // strlcat (dest, src, 0);
    // printf("strlcat:    %s\n", dest);
    // ft_strlcat (destcpy, srccpy, 0);
    // printf("ft_strlcat: %s\n", destcpy);

    aux = ft_strrchr("", 87);
    printf("\nEso es:\n%s\n", aux);

    return 0;
}