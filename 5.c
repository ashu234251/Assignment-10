// 5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void odd(int);

int main()
{
    int n;
    printf("Enter Value of n:");
    scanf("%d",&n);
    printf("First %d odd natural numbers are: ",n);
    odd(n);
    return 0;
}

void odd(int N)
 {
    int i,count=0;
    for(i=1;i;i+=2)
      {
        printf("%d ",i);
        count++;

        if(count==N)
          break;
      }

 }