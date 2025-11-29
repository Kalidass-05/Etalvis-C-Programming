#include <stdio.h>
#include <math.h>
int main() {
    
    int n;
    int count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0)
    {
        int d = n%10;
        if(d%2==1)
        {
            count++;
        }
        n/=10;
    }
    
    printf("Number of Odd Digit :%d",count);
    return 0;
}
