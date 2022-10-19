#include <stdio.h>
#include <stdlib.h>

void int_beolvas(int *x)
{
    char ch;
    int ok;

    do
    {
        ok = 1;
        printf("Szam: ");
        if (scanf("%d", x) != 1)
        {
            printf("invalid input");
            while (getchar() != '\n');
            ok = 0;
        }
        
    } while (!ok);
    
    
    return;
}

int faktor(int x)
{
    int fakt = 1;
    while (x > 1)
    {
        fakt *= x;
        x--;
    }
    
}

int main()
{
    int szam;
    int_beolvas(&szam);
    printf("%d! = %d\n", szam, faktor(szam));

    return 0;
}