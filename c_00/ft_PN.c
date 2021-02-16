#include <stdio.h>
#include <unistd.h>

int main()
{

        int i;
        i = 0;

	char P = 'P';
	char N = 'N';


  if (i >= 0)
{ 
        write(1, &P, 1);
}

else
        write(1, &N, 1);

return 0;
} 
