// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",(n%2)==1?n-5:n);

    return 0;
}
