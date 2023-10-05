int	ft_strncmp(char *str1, char *str2, int n)
{
	int i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}