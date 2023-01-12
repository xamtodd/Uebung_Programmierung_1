#include <stdio.h>
#include <math.h>

int main() {
    double ergebnis;
    
    ergebnis = 0.1 + 0.2;
    
    printf("%d\n", ergebnis == 0.3); //false
    /*
     Diese Aussagbe ergibt false, da die 0.2 in binaer eine
     periodische Zahl ist. Deshalb laesst sich diese Aussage nicht
     richtig (genau) darstellen und ergibt false.
     */
    
    ergebnis = 0.1 + 0.3;
    
    printf("%d\n", ergebnis == 0.4); //true
    /*
     Diese Aussage ergibt true, da sich alle Zahlen unperiodisch in
     binaer darstellen lassen und die Addition ohne Probleme funktioniert.
     */
    
    //harmonische Reihe
    double dSumme = 0;
    float fSumme = 0;
    
    for(double i = 1; i <= 1000000; i++){
        fSumme += (1/i);
    }
    
    printf("Die Summe ist: %.17lf", fSumme); //lf => long float
    
    /*
     double:
        n = 10.000 dSumme = 9.78760603604434820
        n = 100.000 dSumme = 12.09014612986333503
        n = 1.000.000 dSumme = 14.39272672286498889
     
     float:
        n = 10.000 fSumme = 9.78761291503906250
        n = 100.000 fSumme = 12.09085083007812500
        n = 1.000.000 fSumme = 14.35735797882080078
     
     Was faellt auf?
     Die Werte weichen leicht von den korrekten Werten ab. Wenn man allerdings
     dem Datentyp double nimmt ist man naeher am korreten Wert dran, als mit dem Datentyp float.
     */
    
    return 0;
}
