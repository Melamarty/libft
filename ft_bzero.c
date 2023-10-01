#include <strings.h>

void bzero(void *s, size_t len)
{
    unsigned char *str;
    int i;
    str = (unsigned char *)s;
    while (i < len)
    {
        *str = '0';
        str++;
        i++;
    }
    *str = '\0';
}