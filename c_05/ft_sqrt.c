int	ft_sqrt(int nb)
{
	int i;
	i = 0;
	while ( nb != (i * i))
		i++;
	return (i);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(549));
	return (0);
}
