#include <stdio.h>
int main()
{
    int a, b , c, sum, sum1;
    scanf("%d", &a);
    scanf("%d", &b);
    sum = a + b;
    printf(" Sum is %d", sum);

    scanf("%d", &c);
    sum1=sum-c;
    printf("Sum is %d", sum1);
    return 0;

}
