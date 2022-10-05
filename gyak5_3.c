#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    double tomb[] = {289.5, 340.1, 298.5, 300.3, 300.2, 277.7, 333.3, 321.0, 299.9, 276.1, 255.0, 369.8};
    int meret = sizeof(tomb) / sizeof(double);

    //a.)
    int db = 0;
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < 300)
        {
            db++;
        }
    }
    printf("db: %d", db);
    //b.)
    bool monoton = true;
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] < tomb[i-1])
        {
            monoton = false;
            break;
        }
    }
    /*
    if (monoton) printf("\nmonoton növekvő");
    else printf("\nnem monoton növekvő");
    */
    printf("\na sorozat monoton növekvő: %s", monoton ? "igaz" : "hamis");


    //c.) - minimum kiválasztás
    int minindex = 0;
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] < tomb[minindex])
        {
            minindex = i;
        }
    }
    printf("\nlegkisebb: %.2lf (%d. elem)", tomb[minindex], minindex+1);
    //maximum kiválasztás
int maxindex = 0;
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] > tomb[maxindex])
        {
            maxindex = i;
        }
    }
    printf("\nlegnagyobb: %.2lf (%d. elem)", tomb[maxindex], maxindex+1);

    //szórás (átlagtól való eltérés)
    double osszeg, atlag = 0;
    
    for (int i = 0; i < meret; i++)
    {
        osszeg += tomb[i];
    }
    atlag = osszeg / meret;
    printf("\nAz áltag: %.2lf", atlag);
    
    double szoras = 0;
    for (int i = 0; i < meret; i++)
    {
        printf("\nA %d. elem szórása: %.2lf", i+1, tomb[i]-atlag);
    }
    

    return 0;
}