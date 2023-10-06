#include "libft.h"


// void ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
//     unsigned int i;

//     i = 0;
//     while (s[i])
//     {
//         f(i, &s[i]);
//         i++;
//     }
// }

void f(unsigned int i, char *c)
{
    *c = *c + 1;
    i = i + 0;
}

int main()
{
    char s[] = "abc d e f g h i g k";
    ft_striteri(s,f);
    printf("%s\n", s);
}
