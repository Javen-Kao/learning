#include <stdio.h>

int main()
{
        int c;
        printf("EOF is %d:",EOF);
        printf("\n");
        c = getchar();
        while(c != 0 )
        {
        printf("%d",c);putchar(c);
        c = getchar();
        }
        return 0;
}
    
