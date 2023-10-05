#include <string.h>


#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_memcpy function
void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Destination buffer

    // Test 1: Copy the entire source string to the destination
    ft_memcpy(dest, src, strlen(src) + 1);
    printf("Test 1: Copy entire string (custom): %s\n", dest);

    char dest_std[20];  // Destination buffer for standard memcpy

    // Using standard memcpy for comparison
    memcpy(dest_std, src, strlen(src) + 1);
    printf("Test 1: Copy entire string (standard): %s\n", dest_std);

    // Test 2: Copy a portion of the source string to the destination
    memset(dest, 0, sizeof(dest));  // Reset destination buffer
    memset(dest_std, 0, sizeof(dest_std));  // Reset standard destination buffer

    size_t partial_size = 5;  // Copy only the first 5 characters
    ft_memcpy(dest, src, partial_size);
    memcpy(dest_std, src, partial_size);
    printf("Test 2: Copy partial string (custom): %s\n", dest);
    printf("Test 2: Copy partial string (standard): %s\n", dest_std);

    int a = 10, b,c;
    ft_memcpy(&b,&a,4);
    memcpy(&c,&a,4);
    printf("Test 3: Copy partial integers (custom): %d\n", b);
    printf("Test 3: Copy partial integers (standard): %d\n", c);

    return 0;
}

// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
//     unsigned char *d;
//     unsigned char *s;
//     size_t i;

//     d = (unsigned char *)dest;
//     s = (unsigned char *)src;
//     i = 0;
//     while (i < n)
//     {
//         d[i] = s[i];
//         i++;
//     }
//     return dest;
// }