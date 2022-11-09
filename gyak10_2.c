#include <stdio.h>
#include <math.h>

typedef struct pont {
    double x, y;
} Pont;


typedef struct kor {
    Pont kp;
    double r;
} Kor;

void beolvas(Kor *k);
int atfed(Kor k1, Kor k2);

int main() {
    Kor k1, k2;
    printf("adjon meg 2 kort:\n");
    beolvas(&k1); 
    beolvas(&k2);
    if (atfed(k1, k2) == 1)
    {
        printf("van atfedes");
    }
    else printf("nincs atfedes");
}

void beolvas(Kor *k){
    scanf("%lf %lf %lf", &k->kp.x, &k->kp.y, &k->r);
    return;
}

int atfed(Kor k1, Kor k2){
    int ok = 0;
    if (sqrt(pow(k1.kp.x-k2.kp.x, 2)+pow(k1.kp.y-k2.kp.y, 2)) < k1.r+k2.r)
    {
        ok = 1;
    }
    
    return ok;
}
