// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    
    int n1,n2;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&n1,&n2);
    int hcf;
    for(int i=1;i<n1 && i<n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    printf("%d",hcf);
    return 0;
}
