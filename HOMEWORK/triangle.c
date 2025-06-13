/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("enter the sides");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2&&s2==s3)
    {
        printf("Triangle is equilateral");
    }
    else if(s1==s2||s2==s3||s1==s3)
    {
        printf("Triangle is isoceles");
    }
    else
    {
        printf("Triangle is scalene");
    }
    return 0;
}
