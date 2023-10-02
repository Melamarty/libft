#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_isspace(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int    ft_atoi(const char *str)
{
    int i;
    int long res;
    int s;

    i = 0;
    while (ft_isspace(str[i]))
        i++;
    s = 1;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            s = -s;
        i++;
    }
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}

int main ()
{
    printf("atoi result -----> %d\n", atoi("42"));
    printf("ft_atoi result -----> %d\n", atoi("42"));
    printf("-----------------------------\n");
    printf("atoi result -----> %d\n", atoi("     456"));
    printf("ft_atoi result -----> %d\n", atoi("   456"));
    printf("-----------------------------\n");
    printf("atoi result -----> %d\n", atoi("  -1234"));
    printf("ft_atoi result -----> %d\n", atoi("  -1234"));
    printf("-----------------------------\n");
    printf("atoi result -----> %d\n", atoi("   ++1234"));
    printf("ft_atoi result -----> %d\n", atoi("    ++1234"));
    printf("-----------------------------\n");
    printf("atoi result -----> %d\n", atoi("   123qz123"));
    printf("ft_atoi result -----> %d\n", atoi("   123ab123"));
}
