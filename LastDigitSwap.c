// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a = n%10;
    int b = (n/10)%10;
    int c = (n/100)%10;
    int d = (n/1000)%10;
    int ans = c*1000+d*100+b*10+a;
    printf("Output: %d",ans);
    return 0;
}
