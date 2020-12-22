#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number a :");
    scanf("%d", &a);
    printf("Enter another number b :");
    scanf("%d", &b);

    if(a>b)
    {
        printf("\na is greatest number");
    }
    else if(a<b)
    {
        printf("\nb is greatest number");
    }
    else
    {
        printf("\nEqual number");
    }

    return 0;
}
