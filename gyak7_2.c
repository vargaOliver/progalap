#include <stdio.h>
#include <stdlib.h>

int kisebboszto_osszeg(int x)
{
    int osszeg = 0, oszto;
    for (int oszto = 1; oszto <= x/2; oszto++)
    {
        if (x % oszto == 0)
        {
            osszeg += oszto;
        }
        
    }
    return osszeg;
}

int main()
{
    int x;
    printf("Szam: ");
    scanf("%d", &x);
    if (x == kisebboszto_osszeg(x))
    {
        printf("tökéletes");
    }
    else printf("nem tökéletes");
    
    return 0;
}
