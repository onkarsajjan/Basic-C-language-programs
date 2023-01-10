#include<stdio.h>
int main()
{
     float length=0,breadth=0;
     double area = 0;
     printf("Enter length and breadth of rectangle : ");
     scanf("%f %f",&length,&breadth);

     area = length*breadth;
     printf("Area of rectangle = %.2lf",area);
     return 0;
}