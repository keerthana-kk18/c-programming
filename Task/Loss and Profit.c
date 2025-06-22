/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    float cost,selling_price,amount;
    printf("enter the cost:");
    scanf("%f",&cost);
    printf("enter the selling price:");
    scanf("%f",&selling_price);
    if(selling_price>cost)
    {
        amount=selling_price-cost;
        printf("Profit=%f\n",amount);
    }
    else if(cost>selling_price)
    {
        amount=cost-selling_price;
        printf("Loss=%f\n",amount);
    }
    else
    {
        printf("No loss&profit \n");
    }
}
