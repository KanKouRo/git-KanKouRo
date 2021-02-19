int	ft_sqrt(int nb)
{
	int i;
	i = 0;
	if (nb >= 0 && nb <= 2147483647)
	{
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
				return (i);
			else
				i++;
		}
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(64));
	return (0);
}
