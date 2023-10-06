#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    char *str;

    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return NULL;
    i = 0;
    j = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }  
    while(s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}