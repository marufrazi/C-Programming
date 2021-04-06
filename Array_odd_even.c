#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5]={2,45,4,8,0};
    int i;
    int even,odd;
    even=0;odd=0;
    for(i=0;i<=4;i++)
    {
    if(n[i]%2==0)
        even++;
    else
        odd++;
    }
    printf("Array has %d even and %d odd numbers",even,odd);
    return 0;
}
