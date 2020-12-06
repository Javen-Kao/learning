#include<stdio.h>


float  func_c_to_f(int lim_up, int lim_dn, int step)

{
	float fahr,celsius;
	celsius = lim_dn;
	printf("fahr\tcelsius\n");
	while( celsius <= lim_up)
		{
			fahr = celsius * ( 9.0/5 ) + 32.0;
			printf("%6.2f\t%6.2f\n",fahr,celsius);
			celsius += step;
		}
	return 0; 
}


int main()
{
	int lim_up,lim_dn,step;
	do
	{
	printf(" enter :limit_up limit_down step\n");
	scanf("%d %d %d",&lim_up,&lim_dn,&step);
	}while( step < 0);	
	func_c_to_f(lim_up,lim_dn,step);
	return 0;
}
