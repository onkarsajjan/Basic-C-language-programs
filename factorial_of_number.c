#include<stdio.h>
int main()
{
     int num;
     long long fact = 1;
     printf("Enter any number : ");
     scanf("%d",&num);
     for(int i=num;i>0;i--)
     {
          fact = fact * i;
     }
     printf("Factorial of %d is %lld",num,fact);
     return 0;
}