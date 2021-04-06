#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter array elements:");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is %d",sum);
    return 0;
}
