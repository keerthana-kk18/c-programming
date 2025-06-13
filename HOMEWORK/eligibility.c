/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int maths,physics,chemistry,alltotal,total2;
    printf("enter the marks in maths");
    scanf("%d",&maths);
    printf("enter the marks in physics");
    scanf("%d",&physics);
    printf("enter the marks in chemistry");
    scanf("%d",&chemistry);
    alltotal=maths+physics+chemistry;
    total2=maths+physics;
    if(maths>=65&&physics>=55&&chemistry>=50&&alltotal>=190||total2>=140)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }
    
    

    return 0;
}