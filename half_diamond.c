#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        if(i>1)
        {
            for(j=2;j<=i;j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
