#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft;
    int og;

    // %c
    ft = ft_printf("ft: %c\n", 'A');
    og = printf("og: %c\n", 'A');
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %s
    ft = ft_printf("ft: %s\n", "hola mundo");
    og = printf("og: %s\n", "hola mundo");
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %s NULL
    ft = ft_printf("ft: %s\n", NULL);
    og = printf("og: %s\n", NULL);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %d
    ft = ft_printf("ft: %d\n", -42);
    og = printf("og: %d\n", -42);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // INT_MIN
    ft = ft_printf("ft: %d\n", -2147483648);
    og = printf("og: %d\n", -2147483648);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %u
    ft = ft_printf("ft: %u\n", 4294967295u);
    og = printf("og: %u\n", 4294967295u);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %x
    ft = ft_printf("ft: %x\n", 255);
    og = printf("og: %x\n", 255);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %X
    ft = ft_printf("ft: %X\n", 255);
    og = printf("og: %X\n", 255);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %p
    int n = 42;
    ft = ft_printf("ft: %p\n", &n);
    og = printf("og: %p\n", &n);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %p NULL
    ft = ft_printf("ft: %p\n", NULL);
    og = printf("og: %p\n", NULL);
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    // %%
    ft = ft_printf("ft: 100%%\n");
    og = printf("og: 100%%\n");
    printf("ft_ret: %d | og_ret: %d\n\n", ft, og);

    return (0);
}