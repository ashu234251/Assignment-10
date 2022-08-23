// 2. Write a function to calculate simple interest. (TSRS)


#include<stdio.h>

float interest(float,float,float);

int main()
{
  float p,r,t;
  printf("Enter Principal Amount:");
  scanf("%f",&p);
  printf("Enter Rate of Interest :");
  scanf("%f",&r);
  printf("Enter Time Period: ");
  scanf("%f",&t);
  printf("Simple Interest is %0.3f",interest(p,r,t)) ;
  return 0;
}

float interest(float P, float R, float T)
 {
    return (P*R*T)/100;
 }