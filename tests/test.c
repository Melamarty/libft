#include "libft.h"

int main() {
    char str[] = "Hello, World!";
    char test_char = 'W';
    size_t test_size = strlen(str);

    // Test 1: Regular case - char is found in the middle of the string
    char *result_ft = memchr(str, test_char, test_size);
    char *result_std = memchr(str, test_char, test_size);
    printf("Test 1: Char found (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 1: Char found (standard): %s\n", result_std ? result_std : "NULL");

    // Test 2: Char is not found in the string
    test_char = 'Z';
    result_ft = memchr(str, test_char, test_size);
    result_std = memchr(str, test_char, test_size);
    printf("Test 2: Char not found (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 2: Char not found (standard): %s\n", result_std ? result_std : "NULL");

    // Test 3: Char is at the beginning of the string
    test_char = 'H';
    result_ft = memchr(str, test_char, test_size);
    result_std = memchr(str, test_char, test_size);
    printf("Test 3: Char at beginning (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 3: Char at beginning (standard): %s\n", result_std ? result_std : "NULL");

    // Test 4: Char is at the end of the string
    test_char = '!';
    result_ft = memchr(str, test_char, test_size);
    result_std = memchr(str, test_char, test_size);
    printf("Test 4: Char at end (custom): %s\n", result_ft ? result_ft : "NULL");
    printf("Test 4: Char at end (standard): %s\n", result_std ? result_std : "NULL");

    return 0;
}
