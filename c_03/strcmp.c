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

int main(void)
{
	char tab1[] = "salot";
	char tab2[] = "salut";
	printf("%d", ft_strcmp(tab1, tab2));
	return (0);
}
