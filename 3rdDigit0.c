// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a = n%10;
    int b = (n/100)%10;
    int ans = b*100+a;
    printf("Output: %d",ans);
    return 0;
}
