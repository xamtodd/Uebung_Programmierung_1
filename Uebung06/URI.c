#include<stdio.h>
#include<ctype.h>

float holeWert(char);
float berechneSpannung(float, float);
float berechneStromstaeke(float, float);
float berechneWiderstand(float, float);
void zeigeErgebnis(char, float);

int main () {
    float u, r, i;
    int modus = 0;
    while(1){
        printf("Welchen Wert wollen Sie berechnen? Geben Sie die Zahl ein:\n");
        printf("U Spannung -> 1\n");
        printf("R Widerstand -> 2\n");
        printf("I Stromstaerke -> 3\n");
        printf("Abbruch -> 0\n");
        printf("Ihre Eingabe: ");
        scanf("%d", &modus);
        printf("\n");
        
        modus = tolower(modus);
        
        switch(modus){
            case 1:
                //Spannung
                i = holeWert('I');
                r = holeWert('R');
                u = berechneSpannung(r, i);
                zeigeErgebnis('U', u);
                printf("\n");
                printf("---------------------------------------------------\n");
                printf("\n");
                break;
            case 2:
                //Wiederstand
                i = holeWert('I');
                u = holeWert('U');
                r = berechneWiderstand(u, i);
                zeigeErgebnis('R', r);
                printf("\n");
                printf("---------------------------------------------------\n");
                printf("\n");
                break;
            case 3:
                //Stromstaeke
                u = holeWert('U');
                r = holeWert('R');
                i = berechneStromstaeke(u, r);
                zeigeErgebnis('I', i);
                printf("\n");
                printf("---------------------------------------------------\n");
                printf("\n");
                break;
            case 0:
                //Abbruch
                printf("Abbruch!\n");
                return 0;
            default:
                printf("Error\n");
                return 0;
        }
    }
    return 0;
}

float holeWert (char c) {
    float value;
    printf("%c eingeben: ", c);
    scanf("%f", &value);
    return value;
}
float berechneSpannung(float r, float i) {
    return r * i; // Spannung U = R * I
}
float berechneWiderstand(float u, float i) {
    return u / i; // Wiederstand R = U / I
}
float berechneStromstaeke(float u, float r) {
    return u / r; // Stromstaerke I = U / R
}
void zeigeErgebnis (char c, float x) {
    printf("%c betraegt: %f\n", c, x);
}
