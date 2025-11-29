// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,sum=0;
   printf("Enter a number:");
   scanf("%d",&n);
   int rev = 0;
   loop:if(n!=0)
   {
       int d = n%10;
       rev = rev*10+d;
       n=n/10;
       goto loop;
   }
   printf("Reverse:%d",rev);
    return 0;
}
