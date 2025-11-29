// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int count=0;
    int f=1;
    while(n!=0)
    {
        int d = n%10;
        if(d==2||d==3||d==5||d==7)
        {
            count++;
        }
        n/=10;
    }
    printf("%d",count);
    return 0;
}
