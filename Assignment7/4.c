// Online C compiler to run C program online
#include <stdio.h>
void disp_sum(int i){
    int sum=0;
    while(i>=1)
    {
        sum+=i;
        i--;
    }
    printf("%d",sum);
    }
int main() {
    int i=6;
    disp_sum(i);

    return 0;
}
