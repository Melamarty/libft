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
    size_t i = 0;
    size_t j = ft_strlen(s1) - 1;

    while (s1[i] && inclu(s2, s1[i]))
        i++;
    while (j > i && inclu(s2, s1[j]))
        j--;
    
    if (i > j)
        return 0;
    else
        return (j - i + 2);
}

char *ft_strtrim(const char *s1, const char *s2)
{
    char *str;
    size_t i;
    size_t j;
    size_t len;

    if(!s1)
        return (NULL);
    if(!s2)
        return (ft_strdup(s1));
    len = leng(s1, s2);
     if (ft_strlen(s1) == 0 || len == 0)
        return (ft_strdup(""));
    str = (char *)malloc(len);
    if(str == NULL)
        return (NULL);
    i = 0;
    while(inclu(s2, s1[i]))
        i++;
    if (ft_strlen(s1) == 0 || i >= ft_strlen(s1))
        return (ft_strdup(""));
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
