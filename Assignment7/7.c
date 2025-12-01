// Online C compiler to run C program online
#include <stdio.h>
void disp_2digit_odd(int n){
   int sum=0;
   int temp = n;
   if(n%2==1)
   {
       while(n!=0)
       {
           sum+=n%10;
           n/=10;
       }
   }
   if(sum==7)
   {
       printf("%d ",temp);
   }
    }
int main() {
    for(int i=11;i<=99;i++)
    {
        disp_2digit_odd(i);
    }

    return 0;
}
