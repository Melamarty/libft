#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;

    i = 0;
    tmp = malloc(count * size);
    if(tmp == NULL)
      return (NULL);
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