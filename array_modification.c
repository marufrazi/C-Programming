#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={23,34,45,56,12};
    int i;
    for(i=0;i<=4;i++)
        a[i]=a[i]+10;
    for(i=0;i<=4;i++)
        printf("%d\n",a[i]);
    return 0;
}
