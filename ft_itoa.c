#include "libft.h"

int get_len(int n)
{
    int long nb;
    int len;

    nb = n;
    if(nb < 0)
        nb = -nb;
    len = 0;
    while (nb > 0)
    {
        nb /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    int len;
    char *s;
    int long nb;

    if(n > 0)
        len = get_len(n);
    else
        len = get_len(n) + 1;
    s = (char *)malloc(len + 1);
    if (!s)
        return (NULL);
    nb = n;
    if(nb < 0)
    {
        s[0] = '-';
        nb = -nb;
    }
    s[--len] = '\0';
    while (nb > 0)
    {
        s[len--] = nb % 10 + '0';
        nb /= 10;
    }
    return (s);
}

// #include <stdio.h>
// int main()
// {
//     char *s = ft_itoa(-2147483648);
//     printf("=== > %s\n",s);
// }