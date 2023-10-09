#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t slen;

    slen = ft_strlen(src);
    if(dstsize == 0 && dst == NULL)
        return (slen);
    dlen = ft_strlen(dst);
    
    if (dlen >= dstsize)
        dlen = dstsize;
    if(dlen == dstsize)
        return (dlen + slen);
    if(dlen + slen < dstsize)
        ft_memcpy(dst + dlen, src, slen + 1);
    else
    {
        ft_memcpy(dst + dlen, src, dstsize - dlen - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dlen + slen);
}
