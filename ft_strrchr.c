#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    while (*s)
        s++;
    if(c == *s)
        return (s);
    while(--len >= 0 && *s != c)
        s--;
    if (len >= 0)
        return (s);
    return (NULL);
}