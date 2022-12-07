#include<stdio.h>

void muster(int);

int main(){
    muster(30);
    
    return 0;
}

void muster(int anz_zeilen){
    //Baumkrone
    for(int i = 0; i < anz_zeilen + 1; i++){
        printf(" ");
    }
    printf("+");
    for(int i = 0; i < anz_zeilen + 1; i++){
        printf(" ");
    }
    printf("\n");
    
    //Mitte des Baums
    for(int zeile = 1; zeile < anz_zeilen - 1; zeile++){
        int anzSterne = 2 * zeile + 1;
        int anzMaxSterne = 2 * anz_zeilen + 1;
        
        for(int i = 0; i <= (anzMaxSterne - anzSterne) / 2; i++){
            printf(" ");
        }
        
        //Sterne
        for(int sterne = 0; sterne < anzSterne; sterne++){
            printf("+");
        }
        
        printf("\n");
    }
    
    //Baumstamm
    for(int i = 0; i < anz_zeilen + 1; i++){
        printf(" ");
    }
    printf("+");
    for(int i = 0; i < anz_zeilen + 1; i++){
        printf(" ");
    }
    printf("\n");
}
