// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>

void prime(int);

int main()
{
  int n;
  printf("Enter a Number: \n");
  scanf("%d",&n);
  prime(n);
  return 0;
}

void prime(int N)
{

    int i;
   
     for(i=2;i;i++)
      {
        if(N%i==0)
         {
            printf("%d ",i);
            N=N/i;
            i=i-1;
         }
         if(N==1)
           break;
      }
    
    
}