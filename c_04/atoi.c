int	ft_atoi(char *str)
{
	int n;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (negative)
		n *= -1;
	return (n);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("  \n \t+--\r+-+54752.o77*"));
	return (0);
}
