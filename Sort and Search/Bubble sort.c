/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10]={6,2,1,7,3,9,4};
    int i,j,n=7,temp;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    
}
