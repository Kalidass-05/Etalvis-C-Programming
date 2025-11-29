// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   int temp = n;
   int d = log10(n);
   int digit = pow(10,d);
   int last = (n/digit);
    int mid = (n%digit)/10;
   if(last%2==0)
   {
       printf("%d",temp);
   }
   else
   {
       printf("%d",(last-1)*digit+mid*10+temp%10);
   }
//   printf("After swap:%d",ans);
    return 0;
}
