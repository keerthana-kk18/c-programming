/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i = 1; i <= 4; i++) 
    {
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}

