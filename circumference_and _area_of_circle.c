#include<stdio.h>
int main()
{
     float radius;
     double area,circumference;
     printf("Enter radius of a circle : ");
     scanf("%f",&radius);

     circumference = 2*3.14*radius;
     printf("Circumference of circle = %.2lf\n",circumference);

     area = 3.14*radius*radius;
     printf("Area of circle = %.2lf",area);
     return 0;
}