#include <stdio.h>

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        int d = n%10;
        sum = sum +d;
        n/=10;
    }
    printf("Sum of Digit: %d",sum);
    return 0;
}
