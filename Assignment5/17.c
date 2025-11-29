#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int d = log10(n);
    int digit = pow(10,d);
    int f = n/digit;
    if(f%2==1)
    {
        printf("%d",(f-1)*digit+(n%digit));
    }
    else
    {
        printf("%d",n);
    }
    return 0;
}
