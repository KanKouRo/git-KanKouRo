#include <unistd.h>

int main()
{ 
        char a = 'a';
        char z = 'z';

	while (a <= z)
	{
		write(1, &z, 1);
		z--;
	}
}













