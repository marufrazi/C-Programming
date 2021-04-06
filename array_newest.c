#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mark[5]={};
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
        scanf("%d",&mark[i]);
    printf("Loading numbers from memory");
    for(i=0;i<=4;i++)
        printf("%d\n",mark[i]);
    return 0;
}
