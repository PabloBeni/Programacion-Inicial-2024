#include <iostream>
#include <conio.h>

int main()
{   
	int i;
	int acum = 0;

	for (i = 100; i >= 50; i -= 5)
	{
		acum += i;
	}

	printf("%d", acum);
    return 0;
}