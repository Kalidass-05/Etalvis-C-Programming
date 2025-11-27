#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    loop:if(n!=0)
    {
        int d = n%10;
        sum+=d;
        n=n/10;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
