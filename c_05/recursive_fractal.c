int ft_recursive_factorial(int nb)
{
    int i = 0;
    int nbr = 1;

    if (nb < 0)
        return (0);
    if (nb > 1)
        nbr = nb * ft_recursive_factorial(nb - 1);
    return (nbr);
}

#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_factorial(4));
}
