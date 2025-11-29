// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",(n%10)!=(n/10)%10);
    return 0;
}
