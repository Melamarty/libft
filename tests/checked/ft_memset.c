#include "libft.h"

void	*ft_memset(void *buff, int value, size_t size)
{
    size_t	i;
    unsigned char *ptr = (unsigned char *)buff;
    unsigned char byte_value = (unsigned char )value;

    i = 0;
    while (i < size)
    {
        *ptr = byte_value;
        ptr++;
        i++;
    }
    return (buff);
}

#include <stdio.h>
#include <string.h>

// Prototype of your custom ft_memset function
void *ft_memset(void *s, int c, size_t n);

int main() {
    // Test 1: Fill an integer array with a specific value
    int intArray[5];
    ft_memset(intArray, 42, sizeof(intArray));
    printf("Test 1: Fill integer array (custom):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    int intArrayStd[5];
    memset(intArrayStd, 42, sizeof(intArrayStd));
    printf("Test 1: Fill integer array (standard):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArrayStd[i]);
    }
    printf("\n");

    // Test 2: Fill a double array with a specific value
    double doubleArray[3];
    ft_memset(doubleArray, 3.14, sizeof(doubleArray));
    printf("Test 2: Fill double array (custom):\n");
    for (int i = 0; i < 3; i++) {
        printf("%lf ", doubleArray[i]);
    }
    printf("\n");

    double doubleArrayStd[3];
    memset(doubleArrayStd, 3.14, sizeof(doubleArrayStd));
    printf("Test 2: Fill double array (standard):\n");
    for (int i = 0; i < 3; i++) {
        printf("%lf ", doubleArrayStd[i]);
    }
    printf("\n");

    // Test 3: Fill a character array with a specific value
    char charArray[10];
    ft_memset(charArray, 'X', sizeof(charArray));
    printf("Test 3: Fill character array (custom): %s\n", charArray);

    char charArrayStd[10];
    memset(charArrayStd, 'X', sizeof(charArrayStd));
    printf("Test 3: Fill character array (standard): %s\n", charArrayStd);

    return 0;
}
