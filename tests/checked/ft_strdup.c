#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;


    dest = (char *) malloc(ft_strlen(s1) + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype of your custom ft_strdup function
// char *ft_strdup(const char *str);

int main() {
    // Test 1: Basic strdup functionality
    const char *str1 = "Hello, World!";
    char *result1_custom = ft_strdup(str1);
    char *result1_standard = strdup(str1);
    printf("Test 1: Duplicate (custom): %s\n", result1_custom);
    printf("Test 1: Duplicate (standard): %s\n", result1_standard);
    free(result1_custom);
    free(result1_standard);

    // Test 2: NULL input string
    // const char *str2 = NULL;
    // char *result2_custom = ft_strdup(str2);
    // char *result2_standard = strdup(str2);
    // printf("Test 2: NULL input (custom): %s\n", result2_custom);
    // printf("Test 2: NULL input (standard): %s\n", result2_standard);
    // free(result2_custom);
    // free(result2_standard);

    // Test 3: Memory allocation failure
    const char *str3 = "This is a long string, and memory allocation will fail.";
    char *result3_custom = strdup(str3);
    char *result3_standard = ft_strdup(str3);
    if (result3_custom != NULL) {
        printf("Test 3: Long string (custom): %s\n", result3_custom);
        free(result3_custom);
    } else {
        printf("Test 3: Memory allocation failed (custom)\n");
    }
    if (result3_standard != NULL) {
        printf("Test 3: Long string (standard): %s\n", result3_standard);
        free(result3_standard);
    } else {
        printf("Test 3: Memory allocation failed (standard)\n");
    }
    
    // empty string 
    char *emp = "";
    char *res1 = ft_strdup(emp);
    char *res2 = strdup(emp);
    printf("Test 5: empty input (custom): %s\n", res1);
    printf("Test 5: empty input (standard): %s\n", res2);

    return 0;
}
