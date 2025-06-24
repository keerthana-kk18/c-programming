/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={20,30,40,50,60};
    int number,n=5,i,pos;
   // for(i=0;i<n;i++)
    //{
      //  scanf("%d",&a[i]);
    //}
    printf("enter the element to be insert:  ");
    scanf("%d",&number);
    printf("enter the position: ");
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid position\n");
        return 1;
    }
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=number;
    n++;
    printf("array is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}