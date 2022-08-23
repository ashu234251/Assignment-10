//  7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

long combination(int,int,int);

int main()
{  
  int n,r;
  long c;
  printf("Enter Values of N and R:\n");
  scanf("%d%d",&n,&r);
  c=combination(n,r,n-r);  
  printf("Number of Combinations are %ld",c);
  return 0;
}

long combination(int N,int R, int S)
{
    int i;
    long long num=1,den=1,sub=1;
    for(i=N;i>=1;i--)
      {
         num=num*i;
      }
    for(i=R;i>=1;i--)
      {
         den=den*i;
      }
    for(i=S;i>=1;i--)
      {
         sub=sub*i;
      }
    return num/(den*sub);
     
}