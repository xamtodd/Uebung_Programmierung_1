#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // TODO; zuerst a und b noch einlesen:
    scanf("%d", &a);
    scanf("%d", &b);
    /*
     Teilen mit Rest
     Teilen ohne Rest
     Teilen durch 0
     Division duch mit negativen Zahlen
     Zaehler ist kleiner als Nenner
     */
    
    // Dies soll Integer-Division a / b umsetzen:
    while (a - b >= 0) { //Es muss >= heissen
        result++;
        a = a - b;
        //printf("%d\n", a);
    }
    
    printf("%d\n", result);
    
    return 0; //Fehlte auch
}
/*
 Am meisten hat mir das logische Durchdenken der Schleife und Logging geholfen.
 */
