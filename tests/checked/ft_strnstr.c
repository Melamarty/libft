#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(ft_strlen(needle) == 0)
        return ((char *)(haystack));
    while (haystack[i] && i < len)
    {
        j = 0;
        while ( haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
        {
            if(needle[j + 1] == '\0')
                return ((char *)(haystack + i));
            j++;
        }
        i++;
    }
    return (NULL);
}

int main() {
    // Test 1: Basic substring search
    const char *str1 = "Hello, World! hsfygsdycsq";
    const char *sub1 = "World";
    size_t len1 = strlen(str1);
    char *result1_custom = ft_strnstr(str1, sub1, len1);
    printf("Test 1: Substring search (custom): \"%s\"\n", result1_custom); // Should print "World"

    // Test 2: Substring not found within the specified length
    const char *str2 = "Hello, World!";
    const char *sub2 = "Universe";
    size_t len2 = 5; // Limit the search to the first 5 characters
    char *result2_custom = ft_strnstr(str2, sub2, len2);
    printf("Test 2: Substring not found within the specified length (custom): \"%s\"\n", result2_custom); // Should print "(null)"

    return 0;
}



