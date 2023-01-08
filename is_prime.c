#include<stdio.h>
#include<stdbool.h>

int main()
{
     bool flag=true;
     int num=0;
     printf("Enter any number : ");
     scanf("%d",&num);

     //number is prime if it is divisible by only 1 and itself
     //no number greater than half the number plus one divide the number
     //e.g. if number is 10 then (10/2)+1=6 can not divide 10

     if(num == 1)
          printf("1 is neither prime nor composite");
     if(num == 2)
          printf("2 is a prime number");

     for(int i=2;i<((num/2)+1);i++)
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
