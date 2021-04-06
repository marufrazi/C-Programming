#include <stdio.h>

int main()
{
    int mark,div,rmdr;
    printf("Enter a mark :");
    scanf("%d",&mark);
    div=mark/10;
    rmdr=mark%10;
    switch(div)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        switch(rmdr)
        {
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
            printf("D");
            break;
        case 2:
        case 1:
        case 0:
            printf("Fail");
        }
        break;
    case 2:
    case 1:
    case 0:
        printf("Fail");

    }
    return 0;
}
