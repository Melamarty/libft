#include "libft.h"
#include<fcntl.h>

void ft_putnbr_fd(int n, int fd)
{
    int long nb;
    char c;

    nb = n;
    if(nb < 0)
    {
        write(fd, "-", 1);
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
        c = nb + '0';
        write(fd, &c, 1);
    }  
}

// int main()
// {
//     char *file = "file.txt";
//     int fd = open(file, O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putnbr_fd(42, fd);
// }