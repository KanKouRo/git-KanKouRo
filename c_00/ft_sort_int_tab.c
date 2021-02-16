#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j = (i + 1);
	int swap;

	while(i < size)
	{
		if(tab[i] > tab[j])
		{
			swap = tab[i];
			tab[i] = tab[j];
			tab[j] = swap;
			i++;
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
}

void ft_print_tab(int *tab, int size)
{
	int i;
	for(i=0; i< size; i++)
	printf ("%d",tab[i]);
}


int main(void)
{
	int tab[5] = {2, 1, 8, 9 ,5};
	
	ft_print_tab(tab, 5);
	write(1, " ", 1);
	ft_sort_int_tab(tab, 5);
	ft_print_tab(tab, 5);
	return(0);
}

