// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    int d = n/10;
    
    
    printf("%d",(d*10)+2);

    return 0;
}
