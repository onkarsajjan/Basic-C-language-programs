#include<stdio.h>
void swap(int*,int*);
int main()
{
     int a,b;
     printf("Enter the value of a : ");
     scanf("%d",&a);
     printf("Enter the value of b : ");
     scanf("%d",&b);

     printf("Before swapping : a = %d  , b = %d \n",a,b);

     // Pass by reference
     swap(&a,&b);

     printf("After swapping  : a = %d  , b = %d \n",a,b);
     return 0;
}

void swap(int* a,int* b)
{
     *a = *a + *b;
     *b = *a - *b;
     *a = *a - *b;
}