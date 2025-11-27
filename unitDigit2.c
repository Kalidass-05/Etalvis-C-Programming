#include <stdio.h>

int main() {
    int n;
    printf("Enter three digit number:");
    scanf("%d",&n);
    int res = n%10;
    printf("%d",res);
    return 0;
}
