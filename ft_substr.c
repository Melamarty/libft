#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    if(start >= ft_strlen(s))
        return (malloc(1));
    sub = (char *)malloc(len + 1);
    if(sub == NULL || s == NULL)
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

#include <stdio.h>
int main ()
{
    char *sub = ft_substr("Bonjour comment ca va?", 5, 100);
    printf("==> %s\n", sub);
}