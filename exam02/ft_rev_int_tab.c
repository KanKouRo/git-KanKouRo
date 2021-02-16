#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = (size - 1);
	while (i <= j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j++;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 9);
	return (0);
}
