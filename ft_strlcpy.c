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
    while (src[i] && i < dst_size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}

int main()
{
    char p[20];
    char *dest = p;
    char *src = "hello";

    ft_strlcpy(dest, src, 3);
    printf("%s\n", p);
}