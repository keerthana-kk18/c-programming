/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100]={5,2,8,1,3,7,4};
    int i,j,temp,minindex,n=7;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            temp=a[i];
            a[i]=a[minindex];
            a[minindex]=temp;
        }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
