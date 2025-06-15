/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,s;
   for(i=5;i>=1;i--)
   {
       for(s=1;s<=5-i;s++)
       {
           printf(" ");
       }
       for(j=1;j<=(2*i-1);j++)
       {
           if(j==1||j==(2*i-1)||i==5)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }   
        printf("\n");
   }
}
    