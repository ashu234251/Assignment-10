//  6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

long long fact(int);

int main()
{
   int n;
   printf("Enter a Number: ");
   scanf("%d",&n);
   printf("Factorial of %d is %lld",n,fact(n));
   return 0;

}

long long fact(int N)
{
    long long i,f=1;
    for(i=N;i>=1;i--)
      {
       f=f*i ;
      }
    return f;
}