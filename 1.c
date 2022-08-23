// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area(float);

int main()
{
  float r;
  printf("Enter Radius of a Circle: ");
  scanf("%f",&r);
  printf("Area of the Circle is %0.3f",area(r)) ;
  return 0;
}

float area(float R)
 {
    return 3.14*R*R;
 }