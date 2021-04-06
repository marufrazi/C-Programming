#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||j==1||i==5||j==5)
            {
            if(i%2==1)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
