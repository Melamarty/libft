#include<string.h>
#include <stdio.h>

// /mnt/c/Users/simo/Desktop/cursus/libft

#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_memmove function
void *ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char str[] = "Hello, World!";
    char buffer[20];  // Destination buffer

    // Test 1: Move the entire string to a different location
    ft_memmove(buffer, str, strlen(str) + 1);
    printf("Test 1: Move entire string (custom): %s\n", buffer);

    char buffer_std[20];  // Destination buffer for standard memmove

    // Using standard memmove for comparison
    memmove(buffer_std, str, strlen(str) + 1);
    printf("Test 1: Move entire string (standard): %s\n", buffer_std);

    // Test 2: Overlapping source and destination buffers
    char overlapping_buffer[20];  // Overlapping destination buffer
    strcpy(overlapping_buffer, str);

    // Move the string within the same buffer to simulate overlap
    ft_memmove(overlapping_buffer + 6, overlapping_buffer, strlen(overlapping_buffer) + 1);
    printf("Test 2: Move with overlap (custom): %s\n", overlapping_buffer);

    char overlapping_buffer_std[20];  // Destination buffer for standard memmove
    strcpy(overlapping_buffer_std, str);

    // Using standard memmove for comparison
    memmove(overlapping_buffer_std + 6, overlapping_buffer_std, strlen(overlapping_buffer_std) + 1);
    printf("Test 2: Move with overlap (standard): %s\n", overlapping_buffer_std);

    int a = 10, b,c;
    ft_memmove(&b,&a,4);
    memmove(&c,&a,4);
    printf("Test 3: Copy partial integers (custom): %d\n", b);
    printf("Test 3: Copy partial integers (standard): %d\n", c);

    return 0;
}


// void    *ft_memmove(void *dst, const void *src, size_t len)
// {
//     unsigned char *d;
//     unsigned char *s;
//     size_t i;

//     d = (unsigned char *)dst;
//     s = (unsigned char *)src;
//     if (!dst && !src)
//         return (NULL);
//     if(d > s)
//     {
//         i = len;
//         while (i > 0)
//         {
//             d[i - 1] =s[i - 1];
//             i--;
//         }
//     }
//     else
//     {
//         i = 0;
//         while (i < len)
//         {
//             d[i] = s[i];
//             i++;
//         }  
//     }
//     return dst;
// }

// int main() {
//     char dest[20];
//     char src[] = "This is a test.";

//     // Case 1: No overlap
//     ft_memmove(dest, src, 15);
//     printf("Case 1 (No Overlap)\n");
//     printf("src: %s\n", src);
//     printf("dest: %s\n\n", dest);

//     // Case 2: Overlap from left to right
//     ft_memmove(dest + 8, dest, 10);
//     printf("Case 2 (Left Overlap)\n");
//     printf("src: %s\n", src);
//     printf("dest: %s\n\n", dest);

//     // Case 3: Overlap from right to left
//     ft_memmove(dest, dest + 5, 10);
//     printf("Case 3 (Right Overlap)\n");
//     printf("src: %s\n", src);
//     printf("dest: %s\n\n", dest);

//     return 0;
// }
