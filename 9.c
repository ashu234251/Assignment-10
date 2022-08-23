// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)

#include<stdio.h>

int contain(int,int);

int main()
{
    int n,d,c;
    printf("Enter Number and Digit: \n");
    scanf("%d%d",&n,&d);
    c=contain(n,d);
    if(c==1)
      printf("%d contains %d",n,d);
    else
      printf("%d doesn't contain %d",n,d);
      
    return 0;
}

int contain(int N, int D)
  {
     int m;
     while(N)
      {
        m=N%10;
        if(D==m)
          return 1;
        N=N/10;
      }
      return 0;
  }