#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *tmp;

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

char f(unsigned int i, char c)
{
    c = c + 1;
    i = i + 0;
    return (c);
}

int main()
{
    char s[] = "abc d e f g h i g k";
    char *res = ft_strmapi(s,f);
    printf("%s\n", res);
}