/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the angles of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c==180)&&a>0&&b>0&&c>0)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle cannot be formed");
    }
}