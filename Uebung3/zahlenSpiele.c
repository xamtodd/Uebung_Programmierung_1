#include <stdio.h>
#include <stdbool.h>

int main(){
    
    //Summe durch 3 teilbaren Zahlen von 1 bis 1000
    int summe = 0;
    for(int i = 3; i < 1000; i = i + 3){
        summe += i;
    }
    printf("Die Summe ist: %d\n\n", summe);
    
    //n einlesen, wenn 7 enthalten true, sonst false
    //und Anzahl von n Ausgeben
    int n, anz = 0;
    bool vorhanden = false;
    printf("Zahl eingeben: ");
    scanf("%i", &n);
    printf("\n");
    
    while(n > 0){
        int ziffer = n % 10;
        if(ziffer == 7){
            vorhanden = true;
            anz++;
        }
        n = n / 10;
    }
    
    if(vorhanden){
        printf("true, die Anzahl von n ist: %i\n", anz);
    }else{
        printf("false, die Anzahl von n ist: 0\n");
    }
    
    return 0;
}

