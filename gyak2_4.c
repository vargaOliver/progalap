#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, tmp;

    printf("Adjon meg két számot a b formában! ");
    scanf("%d %d", &a, &b);

    tmp = a;
    a = b;
    b = tmp;

    printf("Csere után: a = %d, b = %d", a, b);
    return 0;
}