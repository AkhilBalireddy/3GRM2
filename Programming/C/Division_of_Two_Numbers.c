#include<stdio.h>
int main()
{
    int Dividend,Divisor,Quotient,Remainder;
    printf("Enter Dividend");
    scanf("%d", &Dividend);
    printf("Enter Divisor");
    scanf("%d", &Divisor);
    Quotient=Dividend/Divisor;
    Remainder=Dividend% Divisor;
    printf("Quotient=%d\n",Quotient);
    printf("Remainder=%d\n",Remainder);
    return 0;
}

