int	ft_strncmp(char *str1, char *str2, int n)
{
	int i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}

#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_strncmp function
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, Universe!";
    size_t test_size = strlen(str1);

    // Test 1: Equal strings
    int result_ft = ft_strncmp(str1, str2, test_size);
    int result_std = strncmp(str1, str2, test_size);
    printf("Test 1: Equal strings (custom): %d\n", result_ft);
    printf("Test 1: Equal strings (standard): %d\n", result_std);

    // Test 2: Strings with different content
    result_ft = ft_strncmp(str1, str3, test_size);
    result_std = strncmp(str1, str3, test_size);
    printf("Test 2: Different strings (custom): %d\n", result_ft);
    printf("Test 2: Different strings (standard): %d\n", result_std);

    // Test 3: Partial comparison
    size_t partial_size = 5;  // Compare only the first 5 characters
    result_ft = ft_strncmp(str1, str2, partial_size);
    result_std = strncmp(str1, str2, partial_size);
    printf("Test 3: Partial comparison (custom): %d\n", result_ft);
    printf("Test 3: Partial comparison (standard): %d\n", result_std);

    return 0;
}
