// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int ans=0;
    loop:if(n!=0)
    {
        ans+=n%10;
        n/=10;
        goto loop;
    }
    printf("Output: %d",ans);
    return 0;
}
