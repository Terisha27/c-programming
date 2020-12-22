#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);

    if(a > 0)
    {
        printf("The number is positive\n");
    }

    else if(a < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is Zero\n");
    }

    return 0;
}
