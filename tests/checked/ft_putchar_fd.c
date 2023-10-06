#include "libft.h"
#include <fcntl.h>

// void ft_putchar_fd(char c, int fd)
// {
//     write(fd ,&c, 1);
// }

int main()
{
    char *file = "fil.txt";
    int fd = open(file, O_WRONLY | O_CREAT | O_APPEND, 0644);
    ft_putchar_fd('A', fd);
}