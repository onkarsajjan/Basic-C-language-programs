// Armstrong number is a number that is equal to the sum of cubes of its digits.
#include<stdio.h>
int main()    
{    
     int num,r,sum=0,temp;    
     printf("enter a number : ");    
     scanf("%d",&num);    
     temp=num;    
     while(num>0)    
     {    
          r=num%10;    
          sum=sum+(r*r*r);    
          num=num/10;    
     }    
     if(temp==sum)    
          printf("%d is an armstrong  number.",temp);    
     else    
          printf("%d is not an armstrong number.",temp);    
     return 0;  
}   