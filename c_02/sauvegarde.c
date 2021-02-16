int	ft_str_is_alpha(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			j++;
		}
	i++;
	}
	if (size = 0 || j = size)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
