//C Program to check whether the given integer is positive or negative using functions//
#include<stdio.h>
int PN(int n)
{
    if(n>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    return PN;
}
int main()
{
    int num1;
 printf("enter num:");
    scanf("%d",&num1);
       int res = PN(num1);
    return  0; 
}



------OUTPUT------
  
  enter num:8
positive
enter num:-5
negative
