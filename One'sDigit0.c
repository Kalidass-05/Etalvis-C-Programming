// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter a 2 number:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    int ans1 = (n1/10);
    int ans2 = (n2/10);
    
    
    printf("%d %d",ans1*10,ans2*10);

    return 0;
}
