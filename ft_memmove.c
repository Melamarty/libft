#include<string.h>
#include <stdio.h>

// /mnt/c/Users/simo/Desktop/cursus/libft

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (NULL);
    if(d > s)
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] =s[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }  
    }
    return dst;
}

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
