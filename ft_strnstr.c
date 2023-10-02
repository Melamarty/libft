#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(ft_strlen(needle) == 0)
        return (haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while ( haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
        {
            if(needle[j + 1] == '\0')
                return (haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}