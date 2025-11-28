// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=temp = n;   
    
  printf("Output: %d", ((n % 10) % 2 == 0 && (n / 1000) % 10 == 1) ? temp : temp-5);


    return 0;
}
