int ft_iterative_power(int nb,int power)
{
    int i;
    int nbr;

    i = 0;
    nbr = nb;
    if (nb < 0)
        return(0);
    while (i < power - 1)
    {
        nbr = (nbr * nb);
        i ++;
    }
    return (nbr);
}

#include <stdio.h>
int main(void)
{
    printf("%d", ft_iterative_power(5, 5));
    return (0);
}
