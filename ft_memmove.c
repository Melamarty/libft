#include<string.h>
#include <stdio.h>

// /mnt/c/Users/simo/Desktop/cursus/libft

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (NULL);
    if(d > s)
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] =s[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }  
    }
    return dst;
}
