#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    unsigned int slen;

    if(!s)
        return (ft_strdup(""));
    slen = ft_strlen(s);
    if(start >= slen || len == 0)
        return (ft_strdup(""));
    sub = (char *)malloc(len + 1); 
    if(!sub)
        return (NULL);
    i = 0;
    while(len > 0 && s[start])
    {
        sub[i] = s[start];
        i++;
        start++;
        len--;
    }
    sub[i] = '\0';
    return (sub);
}
