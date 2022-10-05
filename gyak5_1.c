#include <stdlib.h>
#include <stdio.h>

#define MERET 5

int main()
{
    int tomb[MERET] = {0, 1, 2, 3, 4};
    int tomb2[] = {1, 23, 6, 7, 4, 8, 523, 12, 45, 15, 99, 0};
    for (int i = 0; i < MERET; i++)
    {
        printf("a %d. elem: %d\n", i+1, tomb[i]);
    }
    printf("\n");
    int meret2 = sizeof(tomb2) / sizeof(int);
    for (int i = 0; i < meret2; i++)
    {
        printf("a másik tömb %d. eleme: %d\n", i+1, tomb2[i]);
    }
    
    return 0;
}