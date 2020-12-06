#include <stdio.h>

int main()
{
        int c;
        printf("EOF is %d:",EOF);
        printf("\n");
	scanf("%d",&c);
        while(c != EOF )
        {
        printf("%d-p",c);putchar(c);
	scanf("%d",&c);
	}
        return 0;
}
