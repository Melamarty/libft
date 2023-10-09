#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *tmp;

    if(!s || !f)
        return(NULL);
    i = 0;
    tmp = (char *)malloc(ft_strlen(s) + 1);
    if(!tmp)
        return (NULL);
    while (s[i])
    {
        tmp[i] = f(i,s[i]);
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}