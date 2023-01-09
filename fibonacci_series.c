#include<stdio.h>
int main()
{
     int n,first=0,second=1,nextTerm;
     printf("Enter the number of terms : ");
     scanf("%d",&n);

     printf("Fibonacci series : ");
     for(int i=0;i<n;i++)
     {
          if(i==0)
          {
               printf("%d ",first);
               continue;
          }
          if(i==1)
          {
               printf("%d ",second);
               continue;
          }
          nextTerm = first+second;
          first = second;
          second = nextTerm;

          printf("%d ",nextTerm);

     }
     return 0;
}