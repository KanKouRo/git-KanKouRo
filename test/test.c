#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 5)
    {
        write(1, "1", 1);
        write(1, "\n", 1);
        i++;
    }
    printf("saperlipopette");    
    return (0);
}