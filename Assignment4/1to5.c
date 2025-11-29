// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i=1;
   loop:if(i<=5)
   {
       printf("%d\n",i);
       i++;
       goto loop;
   }
    return 0;
}
