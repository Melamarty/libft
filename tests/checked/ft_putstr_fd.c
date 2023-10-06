#include "libft.h"
#include<fcntl.h>

// void ft_putstr_fd(char *s, int fd)
// {
//     size_t i;

//     i = 0;
//     while (s[i])
//     {
//         write(fd ,&s[i], 1);
//         i++;
//     }
// }
int main()
{
    char *file = "file.txt";
    int fd = open(file, O_WRONLY | O_CREAT | O_APPEND, 0644);
    ft_putstr_fd("hello i love programming", fd);
}