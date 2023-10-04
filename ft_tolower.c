int    ft_lowerer(int c)
{
    if (c >= 'a' && c >= 'z')
        return (c + 32);
    return (c);
}