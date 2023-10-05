// #include "libft.h"

// static int	ft_strncmpc(unsigned char *str1,unsigned char *str2, int n)
// {
// 	int i;

//     i = 0;
// 	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
// 		i++;
// 	return (str1[i] - str2[i]);
// }

// int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
//     unsigned char *st1;
//     unsigned char *st2;

//     st1 = (unsigned char *)s1;
//     st2 = (unsigned char *)s2;
//     return (ft_strncmpc(st1, st2, n));
// }

#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_memcmp function
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main() {
    char str1[] = "aello, World!";
    char str2[] = "bello, World!";
    size_t test_size = strlen(str1);

    // Test 1: Equal strings
    int result_ft = ft_memcmp(str1, str2, test_size);
    int result_std = memcmp(str1, str2, test_size);
    printf("Test 1: Equal strings (custom): %d\n", result_ft);
    printf("Test 1: Equal strings (standard): %d\n", result_std);

    // Test 2: Strings with different content
    char str3[] = "Hello, Universe!";
    result_ft = ft_memcmp(str1, str3, test_size);
    result_std = memcmp(str1, str3, test_size);
    printf("Test 2: Different strings (custom): %d\n", result_ft);
    printf("Test 2: Different strings (standard): %d\n", result_std);

    // Test 3: Partial comparison
    size_t partial_size = 5;  // Compare only the first 5 characters
    result_ft = ft_memcmp(str1, str2, partial_size);
    result_std = memcmp(str1, str2, partial_size);
    printf("Test 3: Partial comparison (custom): %d\n", result_ft);
    printf("Test 3: Partial comparison (standard): %d\n", result_std);

      // Compare only the first 5 characters
    int a = 100, b = 9;
    result_ft = ft_memcmp(&a, &b, partial_size);
    result_std = memcmp(&a, &b, partial_size);
    printf("Test 4: integers comparison (custom): %d\n", result_ft);
    printf("Test 4: integersPartial comparison (standard): %d\n", result_std);

    return 0;
}



