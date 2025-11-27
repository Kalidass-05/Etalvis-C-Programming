#include <stdio.h>

int main()
{
    int n;
    printf("Enter 3 digit number: ");
    scanf("%d",&n);
    int rev=0;
    loop:if(n!=0)
    {
        int d = n%10;
        rev = rev*10+d;
        n=n/10;
        goto loop;
    }
    printf("%d",rev);
    return 0;
}
