#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t slen;
    size_t i;
    size_t j;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);

    if (dlen >= dstsize)
        return slen + dstsize;

    i = dlen;
    j = 0;

    while (src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    
    dst[i] = '\0';
    
    return dlen + slen;
}


// int main ()
// {
//     char d[20] = "hello";
//     char *dest = d;
//     ft_strlcat(dest, " world", 100);
//     printf("%s\n", dest);
//     char p[20] = "hello";
//     char *dst = p;
//     ft_strlcat(dst, " world", 100);
//     printf("%s\n", dst);
// }