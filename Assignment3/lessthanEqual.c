// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a = n%10;
    int b = (n/10)%10;
    if(a<=b)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}
