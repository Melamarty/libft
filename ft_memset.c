#include "libft.h"

void	*ft_memset(void *buff, int value, size_t size)
{
    size_t	i;
    unsigned char *ptr = (unsigned char *)buff;
    unsigned char byte_value = (unsigned char)value;

    i = 0;
    while (i < size)
    {
        *ptr = byte_value;
        ptr++;
        i++;
    }
    return (buff);
}