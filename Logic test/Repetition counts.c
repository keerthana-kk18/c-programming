/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="aaabbbcc";
    int i,n,count=1;
    n=strlen(str);
    // printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",str[i],count);
            count=1;
        }
    }
    return 0;
}
