int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return(nb);
}

#include <stdio.h>
int ft_find_next_prime(int nb)
{
	int nb = 55;
	while (ft_is_next_prime(nb) == 0)
		nb++;
  	printf("%d", ft_is_next_prime(nb));
  	return (0);
}
