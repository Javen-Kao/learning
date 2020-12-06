#include <stdio.h>


float func_c_to_f()
{
	printf("celsius\tfahr\n");
	for( float celsius = 300; celsius >= 0; celsius -= 20)
	{
		printf("%6.2f\t%6.2f\n",celsius,celsius * (9.0/5.0) + 32.0);
	}
	return 0;
}


int main()
{
	printf("hello!\n");
	func_c_to_f();
	return 0;
}
