/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int customer_ID;
    char customer_name[50];
    float units,chargePerUnit,amount,surcharge=0.0,total_amount;
    printf("enter Customer ID: ");
    scanf("%d",&customer_ID);
    printf("enter Customer Name: ");
    scanf("%s", customer_name);
    printf("enter units consumed: ");
    scanf("%f",&units);
    if(units<=199)
    {
        chargePerUnit = 1.20;
    }
    else if(units<400)
    {
        chargePerUnit=1.50;
    }
    else if(units<600)
    {
        chargePerUnit=1.80;
    }
    else
    {
        chargePerUnit=2.00;
    }
    amount=units*chargePerUnit;
    if (amount>400)
    {
        surcharge=amount*0.15;
        total_amount=amount+surcharge;
    }

    if (total_amount<100)
    {
        total_amount=100;
    }
    printf("Customer IDNO    : %d\n", customer_ID);
    printf("Customer Name  : %s\n", customer_name);
    printf("Unit Consumed : %.2f\n", units);
    printf("Amount Charges @Rs. 2.00 per unit : %.2f\n",amount);
    printf("Surchage Amount : %.2f\n",surcharge);
    printf("Net Amount Paid By the Customer : %.2f\n",total_amount);

}
