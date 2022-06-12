// program to find reverse number using functions
#include<stdio.h>
int rev_num( int n,int rem)
{
    int sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
       }
       return sum;
}
            int main()
            {
                int n1,res,rem;
                printf("enter number to reverse:");
                scanf("%d",&n1);
                res = rev_num(n1,rem);
                printf("the reverse number is: %d",res);
                return 0;
            }



----OUTPUT-----
  
  enter number to reverse:1234
the reverse number is: 4321
  
  enter number to reverse:123456789
the reverse number is: 987654321
