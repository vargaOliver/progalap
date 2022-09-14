#include <stdio.h>
#include <stdlib.h>

int main() {
    double a = 10.0;
    int b = 3;
    double result;
    
    printf("\nPélda");
    
    result = a / b;
    printf("\nSzámítás: %f / %d = %.2f", a, b, result);

    ////

    int teglalap_a = 5, teglalap_b = 10;

    printf("\n\nK = %d", 2*teglalap_a + 2*teglalap_b);
    printf("\nT = %d", teglalap_a*teglalap_b);

    return 0;
}