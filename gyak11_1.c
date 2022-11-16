#include <stdio.h>

void beolvas(int* a);
char* haromjegyuSzamGeneral(int *tomb);

int main()
{
    //int a, b, c = 0;
    int tomb[3];
    beolvas(&tomb[0]);
    beolvas(&tomb[1]);
    beolvas(&tomb[2]);

    /*printf("%d\n%d\n%d", a, b, c);*/
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", tomb[i]);
    }
    
    char *szamok = haromjegyuSzamGeneral(tomb);
    for (int i = 0; i < 6; i++)
    {
        printf("%c%c%c\n", szamok[3 * i], szamok[3 * i + 1], szamok[3 * i + 2]);
    }
    

    return 0;
}

char* haromjegyuSzamGeneral(int *tomb)
{
    char strTomb[18];
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                continue;
            }
            for (int k = 0; k < 3; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                strTomb[3 * count] = tomb[i] + 48;
                strTomb[3 * count + 1] = tomb[j] + 48;
                strTomb[3 * count + 2] = tomb[k] + 48;
                count++;

            }
                        
        }
        
    }
    

    return strTomb;
}

void beolvas(int* a)
{
    int ok = 0;
    do
    {
        ok = 1;
        while (scanf("%d", &*a)!=1)
        {
            printf("invalid input");
            while(getchar()!='\n');
            ok = 0;
        }
        if (*a>9||*a<1)
        {
            printf("invalid value");
            while(getchar()!='\n');
            ok = 0;
        }
        
    } while (!ok);
}