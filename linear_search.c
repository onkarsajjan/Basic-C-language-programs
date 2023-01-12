#include<stdio.h>
int main()
{
     int n=0,s_element,j;
     printf("Enter number of elements in an array : ");
     scanf("%d",&n);

     int arr[n];
     printf("Enter elements in an array : ");
     for(int i=0;i<n;i++)
          scanf("%d",&arr[i]);
     
     printf("Enter element which you want to search : ");
     scanf("%d",&s_element);

     //linear search
     for(j=0;j<n;j++)
          if(arr[j] == s_element)
               break;

     printf("%d is present at index %d",s_element,j);
     return 0;
}