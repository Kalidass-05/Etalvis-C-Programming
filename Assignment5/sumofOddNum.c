#include <stdio.h>

int main() {
    int sum=0;
    for(int i=10;i<=99;i++)
    {
        if(i%2==1)
        {
            if((i/10)%10==7)
            {
              sum+=i;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
