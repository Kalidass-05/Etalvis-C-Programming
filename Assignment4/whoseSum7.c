// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i=10,sum=0;
   loop:if(i<=99)
   {
       if(i%2==1)
       {
           int n=i;
           sum=0;
           loop2:if(n!=0)
           {
               sum+=n%10;
               n/=10;
               goto loop2;
           }
           if(sum==7)
           {
               printf("%d\n",i);
           }
       }
       i++;
       goto loop;
   }
    return 0;
}
