#include "libft.h"

static int	ft_strncmpc(unsigned char *str1,unsigned char *str2, int n)
{
	int i;
	while (str1[i] && str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *st1;
    unsigned char *st2;

    st1 = (unsigned char *)s1;
    st2 = (unsigned char *)s2;
    return (ft_strncmpc(st1, st2, n));
}