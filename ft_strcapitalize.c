char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			a;
	int				new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		a = str[i];
		if (new_word == 1 && a >= 'a' && a <= 'z')
			str[i] = str[i] -32;
		else if (new_word == 0 && a >= 'A' && a <= 'Z')
			str[i] = str[i] + 32;
		if (a < '0' || (a > '9' && a < 'A') || (a > 'Z' && a < 'a') || a > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
