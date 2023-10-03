#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;

    i = 0;
    tmp = malloc(count * size);
    while(i < count * size)
        tmp[i++] = 0;
    return (tmp);
}

// explanation
/*
Memory Block:
+---+---+---+---+---+
| 0 | 0 | 0 | 0 | 0 |
+---+---+---+---+---+
  |   |   |   |   |
  |   |   |   |   +--- Element 4 (int)
  |   |   |   +------- Element 3 (int)
  |   |   +----------- Element 2 (int)
  |   +--------------- Element 1 (int)
  +------------------- Element 0 (int)
*/

#include <stdio.h>
int main() {
    int *arr;
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Use my_calloc to allocate memory for an array of 5 integers
    arr = (int *)ft_calloc(num_elements, element_size);

    // Print the array
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory when done
    free(arr);

    return 0;
}