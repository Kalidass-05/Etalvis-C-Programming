#include <stdio.h>

int main() {
    int n;
    printf("Enter three digit number:");
    scanf("%d",&n);
    int res1 = n/10;
    int res2 = res1%10;
    printf("%d",res2);
    return 0;
}
