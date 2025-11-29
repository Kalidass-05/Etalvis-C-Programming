#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int f=1;
    if(n<2) printf("Not Prime");
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=0;
        }
    }
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum==14 && f==1) printf("Prime and Sum of Digit is 14");
    if(sum==14 && f==0) printf("Not Prime and Sum of Digit is 14");
    if(sum!=14 && f==1) printf("Prime and Sum of Digit is not 14");
    if(sum!=14 && f==0) printf("Not Prime and Sum of Digit is Not 14");
    return 0;
}
