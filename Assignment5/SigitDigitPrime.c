#include <stdio.h>
#include <math.h>
int main() {
    
    int count=0;
    int f = 1;
    for(int d=2;d<10;d++)
    {
        f=1;
        for(int i=2;i<=sqrt(d);i++)
        {
            if(d%i==0)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            count++;
            printf("%d ",d);
        }
    }
    
    printf("\nCount of 1 Digit Prime Number :%d",count);
    return 0;
}
