// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i=6,sum=0;
   loop:if(i>=1)
   {
       sum+=i;
       i--;
       goto loop;
   }
   printf("%d\n",sum);
    return 0;
}
