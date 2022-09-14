#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int r;
    double k, t;

    printf("Adja meg a kör sugarát! ");
    scanf("%d", &r);

    t = pow(r, 2) * M_PI;
    k = 2*M_PI*r;

    printf("\nA kör területe: %f", t);
    printf("\nA kör kerülete: %f", k);
}