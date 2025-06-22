/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int month;
    printf("Enter number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("January has 31 days\n");
            break;
        case 2:
            printf("February has 28 days\n");
            break;
        case 3:
            printf("March has 31 days\n");
            break;
        case 4:
            printf("April has 30 days\n");
            break;
        case 5:
            printf("May has 31 days\n");
            break;
        case 6:
            printf("June has 30 days\n");
            break;
        case 7:
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:
            printf("September has 30 days\n");
            break;
        case 10:
            printf("October has 31 days\n");
            break;
        case 11:
            printf("November has 30 days\n");
            break;
        case 12:
            printf("December has 31 days\n");
            break;
        default:
            printf("Invalid\n");
    }
}
