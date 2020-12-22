#include <bits/stdc++.h>
using namespace std;
int main()
{

    char sign;
    printf("Chose an sign :  ");
    scanf("%c", &sign);

    int num1,num2,value;


    printf("Please enter a number : ");
    scanf("%d", &num1);

   /* getline("NULL",stdin);
    printf("Chose an sign :  ");
    scanf("%c", &sign);*/


    printf("Please enter another number : ");
    scanf("%d", &num2);


    if(sign=='+')
    {
        value = num1+num2;
        printf("The Add is %d %c %d = %d\n", num1, sign, num2, value );
    }
    else if(sign=='-')
    {
        value = num1-num2;
        printf("The Sub is %d %c %d = %d\n", num1, sign, num2, value );
    }
     else if(sign=='*')
    {
        value = num1*num2;
        printf("The Multi is %d %c %d = %d\n", num1, sign, num2, value );
    }
     else if(sign=='/')
    {
        value = num1/num2;
        printf("The Div is %d %c %d = %d\n", num1, sign, num2, value );
    }
    else
    {
        printf(" The Value is Invalid.\n");
    }

    return 0;
}

