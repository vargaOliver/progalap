#include <stdio.h>
#include <stdlib.h>

typedef struct datum{
    int ev;
    int honap;
    int nap;
} Datum;

void beolvas(Datum *d);
void kiir(Datum d);
Datum regebbi_datum(Datum d1, Datum d2);
int hanyeves(Datum d);

int main() {
    
    Datum d1, d2;
    printf("elso datum:\n"); beolvas(&d1);
    printf("masodik datum:\n"); beolvas(&d2);
    Datum regi = regebbi_datum(d1, d2);
    kiir(regi);
    printf("\njelenlegi datum: %s\n", __DATE__);
    printf("\n%d eves", hanyeves(regi));

    return 0;
}

void beolvas(Datum *d){
    /*
    printf("ev: "); scanf("%d", &d->ev);
    printf("honap: "); scanf("%d", &d->honap);
    printf("nap: "); scanf("%d", &d->nap);
    */
    int ok;
    char str[12];
    do
    {
        ok = 1;
        scanf("%s",str);
        if (sscanf(str, "%d.%d.%d", &d->ev, &d->honap, &d->nap)!=3)
        {
            printf("invalid input\n");
            ok = 0;
        }
        
    } while (ok == 0);
    
    return;
}

void kiir(Datum d){
    printf("%d.%d.%d", d.ev, d.honap, d.nap);
    return;
}

Datum regebbi_datum(Datum d1, Datum d2){
    if (d1.ev == d2.ev)
    {
        if (d1.honap == d2.honap)
        {
            if (d1.nap >= d2.nap)
            {
                return d2;
            }
            else if (d1.nap < d2.nap)
            {
                return d1;
            }
        }
        else if (d1.honap > d2.honap)
        {
            return d2;
        }
        else return d1;
    }
    else if (d1.ev > d2.ev)
    {
        return d2;
    }
    else return d1;
}

int hanyeves(Datum d){
    char ho[3];
    int ev, nap;
    sscanf(__DATE__,"%s %d %d", ho, &nap, &ev); //__DATE__ előre definiált makró
    
    return ev - d.ev;
}