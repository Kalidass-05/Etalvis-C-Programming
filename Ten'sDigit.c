#include <stdio.h>

int main() {
    int n;
    printf("Enter two digit number:");
    scanf("%d",&n);
    int res = n%100;
    printf("%d",res);
    return 0;
}
