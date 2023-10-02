#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != c)
    {
        s++;
    }
    if (c == *s)
        return (s);
    return (NULL);
}