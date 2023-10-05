#include "libft.h"

int count_words(const char *s, char c)
{
    size_t i;
    int count;

    i = 0;
    count = 0;
    while(s[i] == c)
        i++;
    while(s[i])
    {
        while (s[i] && s[i] != c)
            i++;
        count++;
        while (s[i] == c)
            i++;
    }
    return (count);
}

char *get_word(const char *s1, size_t s, size_t e)
{
    size_t i;
    char *s2;

    s2 = (char *)malloc(e - s + 2);
    if(s2 == NULL)
        return (NULL);
    i = 0;
    while (s1[s] && s < e)
    {
        s2[i] = s1[s];
        i++;
        s++;
    }
    s2[i] = '\0';
    return (s2);
}

char **ft_split(const char *s, char c)
{
    char **spl;
    size_t i;
    size_t k;
    size_t j;

    spl = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    i = 0;
    if(spl == NULL)
        return (NULL);
    while(s[i] == c)
        i++;
    j = 0;
    while(s[i])
    {
        k = i;
        while(s[i] && s[i] != c)
            i++;
        spl[j++] = get_word(s, k, i);
        while(s[i] == c)
            i++;
    }
    spl[j] = NULL;
    return (spl);
}

// #include <stdio.h>

// int main()
// {
//     char s[] = "hello world i love you";
//     char **sp = ft_split(s, ' ');
//     int i = 0;
//     while (sp[i])
//     {
//         printf("==== %s ====\n", sp[i]);
//         i++;
//     }
// }