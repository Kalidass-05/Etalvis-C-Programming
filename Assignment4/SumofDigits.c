// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,sum=0;
   printf("Enter a number:");
   scanf("%d",&n);
   loop:if(n!=0)
   {
       sum+=n%10;
       n=n/10;
       goto loop;
   }
   printf("Sum:%d",sum);
    return 0;
}
