#include <stdio.h>

int main()
{
        int c;
        printf("EOF is %d:",EOF);
        printf("\n");
        c = getchar();
        while(c != EOF )
        {
        printf("%d",c);putchar(c);
        c = getchar();
        }
        return 0;
}
    
