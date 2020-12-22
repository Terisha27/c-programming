#include <stdio.h>
int main()
{
    double Divisible, Divisor, Quotient, Remainder;

        printf("\nEnter the Divisible : ");
        scanf("%lf", &Divisible);

        printf("\nEnter the Divisor : ");
        scanf("%lf", &Divisor);

        printf("\nEnter the Quotient : ");
        scanf("%lf", &Quotient);

    //scanf("%lf %lf %lf",&Divisible, &Divisor, &Quotient);
    Remainder = (Divisible -(Divisor*Quotient));
    printf("\nRemainder is :%lf",Remainder);

    return 0;

}
