#include <stdio.h>
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
}
