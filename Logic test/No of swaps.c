/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4]={4,3,2,1};
    int temp,swap=0;
    if(a[0]>a[3])
    {
        temp=a[0];
        a[0]=a[3];
        a[3]=temp;
        swap++;
    }
    if(a[1]>a[2])
    {
        temp=a[1];
        a[1]=a[2];
        a[2]=temp;
        swap++;
    }
    printf("%d\n",swap);
    
}
