/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100]={10,20,30,40,50};
    int n=5,num,mid;
    int left=0,right=n-1;
    printf("enter the element to be search: ");
    scanf("%d",&num);
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==num)
        {
            printf("element is found at position %d\n",mid);
            break;
        }
        else if(a[mid]>num)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
        if(left>right)
        {
            printf("element not found");
        }
    }
}
