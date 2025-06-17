/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int a[6]={2,4,5,7,9,3};
    int i,ecount=0,ocount=0;
    for(i=0;i<6;i++)
    {
       if(a[i]%2==0)
       {
         ecount++;
       }
       else
       {
           ocount++;
       }
    }
    printf("Number of even numbers are:%d\n",ecount);
    printf("Number of odd numbers are:%d\n",ocount);
}
