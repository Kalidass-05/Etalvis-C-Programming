// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i=10;
   loop:if(i<=20)
   {
       if(i%2==1) printf("%d\n",i);
       i++;
       goto loop;
   }
    return 0;
}
