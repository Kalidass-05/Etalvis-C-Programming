// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a 4 digit number:");
    scanf("%d",&n);
    int a = (n/1000);
    int b = (n/100)%10;
    int c = (n/10)%10;
    int d = n%10;
    
    int res = a*1000+b*100+d*10+c;
    printf("%d",res);

    return 0;
}
