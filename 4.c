// 4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>

void print(int);

int main()
{
    int n;
    printf("Enter Value of n:");
    scanf("%d",&n);
    printf("First %d natural numbers are: ",n);
    print(n);
    return 0;
}

void print(int N)
 {
    int i;
    for(i=1;i<=N;i++)
      {
        printf("%d ",i);
      }

 }