#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *st1;
    unsigned char *st2;
    size_t i;

    st1 = (unsigned char *)s1;
    st2 = (unsigned char *)s2;
    i = 0;
    while(i < n)
    {
        if ((unsigned char) st1[i] != (unsigned char) st2[i])
            return ((unsigned char) st1[i] - (unsigned char) st2[i]);
        i++;
    }
    return (0);
}
