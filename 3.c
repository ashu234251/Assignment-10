// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int check(int);

int main()
{
  int n,i;
  printf("Enter a Number :");
  scanf("%d",&n);

  if(check(n)==1)
    printf("Number is Even.");
  else
    printf("Number is Odd.");

return 0;

}

int check(int x)
 {
   if(x%2==0)
     return 1;
   else
     return 0;
 }