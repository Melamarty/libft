#include "libft.h"
#include<fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        write(fd ,&s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

// int main()
// {
//     char *file = "file.txt";
//     int fd = open(file, O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putendl_fd("hello i love programming", fd);
// }