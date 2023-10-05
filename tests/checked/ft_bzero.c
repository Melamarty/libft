#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *)s;
    while (i < len)
    {
        *str = 0;
        str++;
        i++;
    }
    *str = '\0';
}

#include <stdio.h>
#include <string.h>

// Your ft_bzero implementation
void ftt_bzero(void *s, size_t n) {
    unsigned char *p = s;
    while (n-- > 0) {
        *p++ = '\0'; // Set each byte to null (ASCII 0)
    }
}

int main() {
    // Test cases
    char str1[] = "Hello, world!";
    char str2[] = "Test";
    char str3[] = "Another test";
    char str4[10];
    int arr1[] = {1, 2, 3, 4, 5};

    // Testing ft_bzero and bzero
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t len3 = strlen(str3);
    size_t len4 = sizeof(str4);
    size_t len5 = sizeof(arr1);

    printf("Original String 1: %s\n", str1);
    bzero(str1, len1);
    printf("After bzero: %s\n", str1);
    strcpy(str1, "Hello, world!");  // Resetting the string
    ft_bzero(str1, len1);
    printf("After ft_bzero: %s\n", str1);

    printf("==========================\n");

    printf("Original String 2: %s\n", str2);
    bzero(str2, len2);
    printf("After bzero: %s\n", str2);
    strcpy(str2, "Test");  // Resetting the string
    ft_bzero(str2, len2);
    printf("After ft_bzero: %s\n", str2);

    printf("==========================\n");

    printf("Original String 3: %s\n", str3);
    bzero(str3, len3);
    printf("After bzero: %s\n", str3);
    strcpy(str3, "Another test");  // Resetting the string
    ft_bzero(str3, len3);
    printf("After ft_bzero: %s\n", str3);

    printf("==========================\n");

    printf("Original String 4 (Uninitialized): %s\n", str4);
    bzero(str4, len4);
    printf("After bzero: %s\n", str4);
    ft_bzero(str4, len4);
    printf("After ft_bzero: %s\n", str4);

    printf("==========================\n");

    printf("Original Array 1: ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    bzero(arr1, len5);
    printf("After bzero: ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    ft_bzero(arr1, len5);
    printf("After ft_bzero: ");
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}