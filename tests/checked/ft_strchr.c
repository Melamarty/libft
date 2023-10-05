// #include "libft.h"

// char *ft_strchr(const char *s, int c)
// {
//     while (*s != '\0') {
//         if (*s == c) {
//             return (char *)s;
//         }
//         s++;
//     }
//     if (c == '\0')
//         return ((char *)s);
//     return NULL;
// }

#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_strchr function
char *ft_strchr(const char *s, int c);

int main() {
    char str[] = "Hello, World!";
    char test_char = 'o';

    // Test 1: Find the first occurrence of 'o' in the string
    char *result_ft = ft_strchr(str, test_char);
    char *result_std = strchr(str, test_char);
    printf("Test 1: First occurrence of 'o' (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 1: First occurrence of 'o' (standard): %s\n", result_std ? result_std : "NULL");

    // Test 2: Character not found in the string
    test_char = 'z';
    result_ft = ft_strchr(str, test_char);
    result_std = strchr(str, test_char);
    printf("Test 2: Character not found (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 2: Character not found (standard): %s\n", result_std ? result_std : "NULL");

    // Test 3: Find the first occurrence of '\0' (null terminator)
    test_char = '\0';
    result_ft = ft_strchr(str, test_char);
    result_std = strchr(str, test_char);
    printf("Test 3: First occurrence of '\\0' (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 3: First occurrence of '\\0' (standard): %s\n", result_std ? result_std : "NULL");

    return 0;
}
