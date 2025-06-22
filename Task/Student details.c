/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rollno;
    char name[50];
    float physics, chemistry, computer_application;
    float total_marks, percentage;
    printf("Roll No:");
    scanf("%d",&rollno);
    printf("Name of Student:");
    scanf("%s",name);
    printf("Marks in Physics:");
    scanf("%f",&physics);
    printf("Marks in Chemistry:");
    scanf("%f",&chemistry);
    printf("Marks in Computer Application:");
    scanf("%f",&computer_application);
    total_marks=physics+chemistry+computer_application;
    percentage=(total_marks/300)*100;
    printf("Total Marks = %f\n",total_marks);
    printf("Percentage = %f\n",percentage);
    if(percentage>=60)
    {
        printf("Division = First\n");
    }
    else if(percentage>=50)
    {
        printf("Division = Second\n");
    }
    else if(percentage>=40)
    {
        printf("Division = Third\n");
    }
    else
    {
        printf("Division = Fail\n");
    }
}