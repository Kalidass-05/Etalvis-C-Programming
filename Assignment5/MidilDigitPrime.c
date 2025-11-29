#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int f=1;
    int d = (n/10)%100;
    printf("%d\n",d);
    if(d<2) printf("Not Prime");
    for(int i=2;i<sqrt(d);i++)
    {
        if(d%i==0)
        {
            f=0;
        }
    }
    
    if(f==1) printf("Prime");
    else printf("Not Prime");
    return 0;
}
