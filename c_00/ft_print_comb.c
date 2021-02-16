#include <unistd.h>
#include <stdio.h>

void ft_print_comb()
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;

	while (a != 7)
	{
		write(1, &a, 1);
		while (b < 8)
		{
			write(1, &b, 1);
			while(c < 9)
			{
				write(1, &c, 1);
			c++;
			}
		b++;
		}
	a++;
	}
}

int	main()
{
	ft_print_comb();
	return 0;
}
