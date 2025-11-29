// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    loop1:if(n>=10)
    {
        sum=0;
        loop2:if(n!=0)
        {
            sum+=n%10;
            n/=10;
            goto loop2;
        }
        n=sum;
        goto loop1;
    }
    printf("%d",sum);
    return 0;
}
