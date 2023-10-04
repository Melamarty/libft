#include "libft.h"

static int inclu(const char *s, char c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if(s[i] == c)
            return (1);
        i++;
    }
    return (0);
}
static size_t leng(const char *s1, const char *s2)
{
    size_t i;
    size_t j;

    i = 0;
    while(inclu(s2,s1[i]))
        i++;
    j = ft_strlen(s1) - 1;
    while (inclu(s2,s1[j]))
        j--;
    return (j - i + 2);
}

char *ft_strtrim(const char *s1, const char *s2)
{
    char *str;
    size_t i;
    size_t j;
    size_t len;

    len = leng(s1, s2);
    str = (char *)malloc(len);
    if(!str)
        return (NULL);
    i = 0;
    while(inclu(s2, s1[i]))
        i++;
    j = 0;
    while (j < len - 1)
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}

// #include <stdio.h>
// int main ()
// {
//     char *s = ft_strtrim("ababaaaMy name is Simonbbaaabbab", "ab");
//     printf("==> %s\n", s);
// }