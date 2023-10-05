#include "libft.h"

// char *ft_strrchr(const char *s, int c)
// {
//     int len;

//     len = ft_strlen(s);
//     while (*s)
//         s++;
//     if(c == *s)
//         return ((char *)s);
//     while(--len >= 0 && *s != c)
//         s--;
//     if (len >= 0)
//         return ((char *)s);
//     return (NULL);
// }

#include <stdio.h>
#include <string.h>

// // Custom ft_strrchr function
// char *ft_strrchr(const char *s, int c);

int main() {
    // Test 1: Basic search for 'l' in "Hello, World!"
    const char *str1 = "Hello, World!";
    int target_char1 = 'l';
    char *result1_custom = ft_strrchr(str1, target_char1);
    char *result1_standard = strrchr(str1, target_char1);
    printf("Test 1: Search for 'l' (custom): %s\n", result1_custom); // Should print "ld!"
    printf("Test 1: Search for 'l' (standard): %s\n", result1_standard); // Should print "ld!"
    
    // Test 2: Search for 'x' in "Hello, World!"
    const char *str2 = "Hello, World!";
    int target_char2 = 'x';
    char *result2_custom = ft_strrchr(str2, target_char2);
    char *result2_standard = strrchr(str2, target_char2);
    printf("Test 2: Search for 'x' (custom): %s\n", result2_custom); // Should print "(null)"
    printf("Test 2: Search for 'x' (standard): %s\n", result2_standard); // Should print "(null)"

    // Test 3: Search for null terminator '\0' in "Hello, World!"
    const char *str3 = "Hello, World!";
    int target_char3 = '\0';
    char *result3_custom = ft_strrchr(str3, target_char3);
    char *result3_standard = strrchr(str3, target_char3);
    printf("Test 3: Search for '\\0' (custom): %s\n", result3_custom); // Should print "(null)"
    printf("Test 3: Search for '\\0' (standard): %s\n", result3_standard); // Should print "(null)"

    return 0;
}
