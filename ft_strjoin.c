#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    char *str;

    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return NULL;
    i = 0;
    while (s1[i] || s2[i])
    {
        if(s1[i])
            str = s1[i];
        else
            str = s2[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}