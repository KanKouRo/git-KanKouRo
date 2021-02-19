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

int ft_find_next_prime(int nb)
{
	while (ft_is_next_prime(nb) == 0)
		nb++;
  	return (nb);
}
