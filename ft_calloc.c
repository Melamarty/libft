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
    // Test cases
    size_t count1 = 5;
    size_t size1 = sizeof(int);
    size_t count2 = 3;
    size_t size2 = sizeof(double);
    size_t count3 = 0; // Special case: zero count
    size_t size3 = sizeof(char);

    // Testing ft_calloc
    int *int_arr = (int *)ft_calloc(count1, size1);
    if (int_arr != NULL) {
        printf("Allocated int array:\n");
        for (size_t i = 0; i < count1; i++) {
            printf("%d ", int_arr[i]); // Should print 0's
        }
        printf("\n");
        free(int_arr);
    } else {
        printf("Allocation failed for int_arr\n");
    }

    printf("==========================\n");
    char *s = (char *)(ft_calloc(10,1));
    if(s)
    {
      printf("allocated string \n");
      printf("%s\n",s);
    }
    else
      printf("Allocation failed for int_arr\n");

    printf("==========================\n");
    double *double_arr = (double *)ft_calloc(count2, size2);
    if (double_arr != NULL) {
        printf("\nAllocated double array:\n");
        for (size_t i = 0; i < count2; i++) {
            printf("%.2f ", double_arr[i]); // Should print 0.00's
        }
        printf("\n");
        free(double_arr);
    } else {
        printf("Allocation failed for double_arr\n");
    }

    printf("==========================\n");
    char *char_arr = (char *)ft_calloc(count3, size3);
    if (char_arr != NULL) {
        printf("\nAllocated char array (special case):\n");
        // No output expected since count3 is 0
        free(char_arr);
    } else {
        printf("Allocation failed for char_arr (special case)\n");
    }

    return 0;
}