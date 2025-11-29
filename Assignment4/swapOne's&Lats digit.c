// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   int d = log10(n);
   int temp = n;
   int digit = pow(10,d);
   int mid = (temp%digit)/10;
   int a = n%10;
   int b = (n/digit);
   int ans = a*digit+mid*10+b;
   printf("After swap:%d",ans);
    return 0;
}
