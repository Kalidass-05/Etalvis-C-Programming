#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<2) printf("Not Prime");
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
