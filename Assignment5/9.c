#include <stdio.h>

int main() {
    int sum=0;
    for(int i=10;i<=99;i++)
    {
        if(i%2==1)
        {
            int temp = i;
            sum=0;
            while(temp!=0)
            {
                sum+=temp%10;
                temp/=10;
            }
            if(sum==7)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
