#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
    size_t len;
    size_t i;

    len = 0;
    while (src[len])
        len++;
    i = 0;
    if(dst_size == 0)
        return (len);
    while (src[i] && i < dst_size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
