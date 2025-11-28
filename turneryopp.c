// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp = n;
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    
    printf("Output: %d",(sum%2)==1?temp-5:temp);

    return 0;
}
