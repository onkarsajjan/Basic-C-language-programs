#include<stdio.h>
#include<stdbool.h>

int main()
{
     bool flag=true;
     int num=0;
     printf("Enter any number : ");
     scanf("%d",&num);

     //number is prime if it is divisible by only 1 and itself

     if(num == 0 || num == 1)
          flag = false;
     if(num == 2)
     {
          printf("2 is a prime number");
          return 0;
     }

     for(int i=2;i<(num/2);i++)
     {
          if(num%i == 0)
          {
               flag=false;
               break;
          }
     }

     if(flag)
          printf("%d is prime number.",num);
     else
          printf("%d is not a prime number.",num);

     return 0;
}
