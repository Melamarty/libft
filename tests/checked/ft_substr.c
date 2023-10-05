#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    unsigned int slen;

    
    slen = 0;
    while (s[slen])
        slen++;
    sub = (char *)malloc(len + 1);
    if(start >= slen)
        return (ft_strdup(""));
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
#include <stdlib.h>
#include <string.h>

// Prototype of your custom ft_substr function
// char *ft_substr(const char *str, int start, int length);

int main() {
    // Test 1: Basic substring extraction
    char str1[] = "Hello, World!";
    char *result1 = ft_substr(str1, 7, 5); // Should extract "World"
    printf("Test 1: Substring (custom): %s\n", result1); // Should print "World"
    free(result1); // Don't forget to free memory

    // Test 2: Start index out of bounds
    char *result2 = ft_substr(str1, 15, 5); // Should return NULL
    printf("Test 2: Start index out of bounds (custom): %s\n", result2); // Should print "(null)"

    // Test 3: Length longer than remaining string
    char *result3 = ft_substr(str1, 7, 20); // Should extract "World!"
    printf("Test 3: Length longer than remaining string (custom): %s\n", result3); // Should print "World!"
    free(result3);

    // Test 4: Negative length
    char *result4 = ft_substr(str1, 7, -3); // Should return NULL
    printf("Test 4: Negative length (custom): %s\n", result4); // Should print "(null)"

    // Test 5: Empty string
    char str2[] = "";
    char *result5 = ft_substr(str2, 0, 3); // Should return an empty string
    printf("Test 5: Empty string (custom): %s\n", result5); // Should print an empty line
    free(result5);

    return 0;
}


// #include <stdio.h>
// int main ()
// {
//     char *sub = ft_substr("Bonjour comment ca va?", 5, 100);
//     printf("==> %s\n", sub);
// }