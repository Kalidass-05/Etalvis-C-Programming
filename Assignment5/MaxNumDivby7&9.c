// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    
    int max=0;
    for(int i=1000;i<=9999;i++)
    {
        if(i%7==0 && i%9==0)
        {
            if(i>max)
            {
                max=i;
            }
        }
    }
    printf("%d",max);
    return 0;
}
