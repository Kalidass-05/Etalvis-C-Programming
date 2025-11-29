// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,count=0;
   printf("Enter a number:");
   scanf("%d",&n);
   loop:if(n!=0)
   {
       n=n/10;
       count++;
       goto loop;
   }
   printf("Count:%d",count);
    return 0;
}
