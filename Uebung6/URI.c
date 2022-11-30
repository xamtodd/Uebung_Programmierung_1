#include<stdio.h>
#include<ctype.h>

float holeWert(char);
float berechneSpannung(float, float);
float berechneStromstaeke(float, float);
float berechneWiederstand(float, float);
void zeigeErgebnis(char, float);

int main () {
    float u, r, i;
    char modus = 'e';
    printf("Welchen Wert wollen Sie berechnen?\n");
    printf("U -> Spannung\n");
    printf("R -> Wiederstand\n");
    printf("I -> Stromstaerke\n");
    printf("Ihre Eingabe:");
    scanf("%c", &modus);
    printf("\n");
    
    modus = tolower(modus);
    
    switch(modus){
        case 'u':
            //Spannung
            i = holeWert('I');
            r = holeWert('R');
            u = berechneSpannung(r, i);
            zeigeErgebnis('U', u);
            break;
        case 'r':
            //Wiederstand
            i = holeWert('I');
            u = holeWert('U');
            r = berechneWiederstand(u, i);
            zeigeErgebnis('R', r);
            break;
        case 'i':
            //Stromstaeke
            u = holeWert('U');
            r = holeWert('R');
            i = berechneStromstaeke(u, r);
            zeigeErgebnis('I', i);
            break;
        default:
            printf("Error\n");
            return 0;
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
float berechneWiederstand(float u, float i) {
    return u / i; // Wiederstand R = U / I
}
float berechneStromstaeke(float u, float r) {
    return u / r; // Stromstaerke I = U / R
}
void zeigeErgebnis (char c, float x) {
    printf("%c betraegt: %f\n", c, x);
}
