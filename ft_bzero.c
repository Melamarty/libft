#include "libft.h"

void bzero(void *s, size_t len)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *)s;
    while (i < len)
    {
        *str = '0';
        str++;
        i++;
    }
    *str = '\0';
}