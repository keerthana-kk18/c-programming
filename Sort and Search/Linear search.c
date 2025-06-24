/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100]={20,30,40,50,60};
    int i,n=5,num;
    printf("enter the element to be search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            printf("element found at index %d\n",i);
            break;
        }
    }
    if(i==n)
    {
        printf("element is not found");
    }
    return 0;
}
