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

    if(s1 == NULL || s2 == NULL)
        return (NULL);
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype of your custom ft_strtrim function
// char *ft_strtrim(const char *s1, const char *set);

int main() {
    // Test 1: Basic trimming
    const char *str1 = "   Hello, World!   ";
    const char *set1 = " ";
    char *result1_custom = ft_strtrim(str1, set1);
    printf("Test 1: Basic trimming (custom): \"%s\"\n", result1_custom); // Should print "Hello, World!"
    free(result1_custom);

    // Test 2: No characters to trim
    const char *str2 = "Hello, World!";
    const char *set2 = "";
    char *result2_custom = ft_strtrim(str2, set2);
    printf("Test 2: No characters to trim (custom): \"%s\"\n", result2_custom); // Should print "Hello, World!"
    free(result2_custom);

    // Test 3: Trimming with a set of characters
    const char *str3 = "<<<Hello, World!>>>";
    const char *set3 = "<>";
    char *result3_custom = ft_strtrim(str3, set3);
    printf("Test 3: Trimming with a set of characters (custom): \"%s\"\n", result3_custom); // Should print "Hello, World!"
    free(result3_custom);

    // Test 4: Empty string
    const char *str4 = "";
    const char *set4 = " ";
    char *result4_custom = ft_strtrim(str4, set4);
    printf("Test 4: Empty string (custom): \"%s\"\n", result4_custom); // Should print an empty string
    free(result4_custom);

    // Test 5: NULL input
    const char *str5 = NULL;
    const char *set5 = " ";
    char *result5_custom = ft_strtrim(str5, set5);
    printf("Test 5: NULL input (custom): %s\n", result5_custom); // Should print "(null)"

    return 0;
}

// #include <stdio.h>
// int main ()
// {
//     char *s = ft_strtrim("ababaaaMy name is Simonbbaaabbab", "ab");
//     printf("==> %s\n", s);
// }