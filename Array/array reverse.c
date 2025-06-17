/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void revarr(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[5]={2,6,4,9,10};
    int i,n=5;
    revarr(a,n);
}

