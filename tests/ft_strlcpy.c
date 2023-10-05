#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
    size_t len;
    size_t i;

    len = 0;
    while (src[len])
        len++;
    i = 0;
    while (src[i] && i < dst_size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
#include <stdio.h>
#include <string.h>

int main() {
    // Test 1: Basic string copy with custom ft_strlcpy
    char dest1[20];
    const char *src1 = "Hello, World!";
    size_t size1 = sizeof(dest1);
    size_t result1_custom = ft_strlcpy(dest1, src1, size1);
    printf("Test 1: String copy (custom): \"%s\", Length: %zu\n", dest1, result1_custom);

    // Test 2: Basic string copy with standard strlcpy (if available)

    // Test 3: Destination buffer too small
    char dest3[5];
    const char *src3 = "Hello, World!";
    size_t size3 = sizeof(dest3);
    size_t result3_custom = ft_strlcpy(dest3, src3, size3);
    printf("Test 3: Destination buffer too small (custom): \"%s\", Length: %zu\n", dest3, result3_custom);

    return 0;
}

// int main()
// {
//     char p[20];
//     char *dest = p;
//     char *src = "hello";

//     ft_strlcpy(dest, src, 3);
//     printf("%s\n", p);
// }