// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp = n;
    int sum=0;
    loop:if(n!=0)
    {
        sum+=n%10;
        goto loop:n/=10;
    }
    int k = sum%2;
    switch(k)
        {
            case 0: 
            printf("%d",temp);
            break;
            case 1:
            printf("%d",temp-5);
            break;
        }

    return 0;
}
