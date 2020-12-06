#include <stdio.h>

int main()
{
	int c;
	printf("EOF is %d:",EOF);
	printf("\n";
	c = getchar();
	while(c != EOF )
	{
	putchar(c);
	c = getchar();
	}
	return 0;
}
