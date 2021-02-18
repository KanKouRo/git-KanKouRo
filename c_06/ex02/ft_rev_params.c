#include <unistd.h>
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{	
	(void) argc;
	(void) argv;
	int j = argc;

	while (j >= 1)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}

