int ft_recursive_power(int nb,int power)
{
    int nbr;

    nbr = 1;
    if (nb < 0)
        return (0);
    if (power > 0)
        nbr = nb * ft_recursive_power(nb, power - 1);
    return (nbr);
}


#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_power(5, 5));
    return (0);
}
