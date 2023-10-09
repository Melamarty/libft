#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    unsigned char *str;

    str = (unsigned char *)s;
    while (len > 0)
    {
        *str++ = 0;
        len--;
    }
}