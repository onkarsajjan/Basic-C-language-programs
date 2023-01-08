#include<stdio.h>
int main()
{
     unsigned int num;
     unsigned long long fact = 1;
     printf("Enter any number : ");
     scanf("%d",&num);
     
     if(num == 0)
          printf("Factorial of 0 is 1");
     
     for(int i=num;i>0;i--)
     {
          fact = fact * i;
     }
     printf("Factorial of %d is %lld",num,fact);
     return 0;
}
