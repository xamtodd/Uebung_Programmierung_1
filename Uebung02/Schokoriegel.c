#include <stdio.h>

int main(){
    int a;
    int b;
    int n;
    
    int anzKlein;
    int anzGross;
    
    //Variablen einlesen
    printf("Geben Sie die Anzahl an kleien Riegeln an: ");
    scanf("%i", &a);
    printf("Geben Sie die Anzahl an grosse Riegeln an: ");
    scanf("%i", &b);
    printf("Geben Sie die Anzahl an Kilo an: ");
    scanf("%i", &n);
    
    //Berechnung
    anzGross = n / 5;
    printf("%i\n", anzGross);
    if(anzGross > b){
        anzGross = b;
    }
    anzKlein = n - anzGross * 5;

    //Ausgabe
    if(anzKlein > a){
        printf("-1\n");
    }else{
        printf("%i\n", anzKlein);
    }

    return 0;
}
