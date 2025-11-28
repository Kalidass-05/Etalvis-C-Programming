// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a 2 digit number:");
    scanf("%d",&n);
    int digit = n%10;
    
    
    printf("%d",digit+10);

    return 0;
}
