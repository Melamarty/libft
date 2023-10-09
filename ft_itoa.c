#include "libft.h"

static int get_len(int n)
{
    int long nb;
    int len;

    if(n == 0)
        return (1);
    nb = n;
    if(nb < 0)
        nb = -nb;
    len = 0;
    while (nb > 0)
    {
        nb /= 10;
        len++;
    }
    if(n > 0)
        return (len);
    return (len + 1);
}

char *ft_itoa(int n)
{
    int len;
    char *s;
    int long nb;

    len = get_len(n);
    s = (char *)malloc(len + 1);
    if (!s)
        return (NULL);
    nb = n;
    if(nb < 0)
    {
        s[0] = '-';
        nb = -nb;
    }
    s[len] = '\0';
    if(nb == 0)
        s[0] = '0';
    while (nb > 0)
    {
        s[--len] = nb % 10 + '0';
        nb /= 10;
    }
    return (s);
}