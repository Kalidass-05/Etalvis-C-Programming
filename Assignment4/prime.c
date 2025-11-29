#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int i = 2;
    int f = 1;

loop:
    if (i * i > n) goto end;  // stopping condition

    if (n % i == 0) {
        f = 0;
        goto end;
    }

    i++;
    goto loop;

end:
    if (f == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
