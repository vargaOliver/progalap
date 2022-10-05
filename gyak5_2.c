#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MERET 5

int main() 
{
    int i, j;
    int lotto[MERET], jelolt;

    srand(time(0)); //random szám generátor inicializálás

    for (int i = 0; i < MERET;)
    {
        lotto[i] = rand() % 90 + 1;
        for (int j = 0; j < i; j++)
        {
            if (lotto[j] == jelolt)
            {
                break;
            }
            
            if (j == i)
            {
                lotto[i] = jelolt;
                i++;
            }
            
        }
        
    }

    for (int i = 0; i < MERET; i++)
    {
        printf("%d", lotto[i]);
    }
    
    


    return 0;
}