#include <stdio.h>
#include <stdbool.h>

int main(){
    int zahl, i, quersumme = 0;
    bool fertig = false;
    
    printf("Geben Sie eine Zahl ein: ");
    scanf("%i", &zahl);
    printf("\n");
    
    i = zahl;
    
    while(true){
        while(i > 0){
            quersumme = quersumme + (i % 10);
            i = i / 10;
        }
        if(quersumme == quersumme % 10){
            break;
        }
        i = quersumme;
        quersumme = 0;
    }
    
    printf("Die iterierte Quersumme von %i ist %i\n", zahl, quersumme);
    
    return 0;
}
