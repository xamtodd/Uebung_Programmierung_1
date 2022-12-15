#include<stdio.h>

void dreieck(int anz_zeilen);

int main(){
    dreieck(8);
    
    return 0;
}

void dreieck(int anz_zeilen){
    //Geschsche Summenformel
    int anzZeichen = (anz_zeilen * (anz_zeilen + 1)) / 2;
    //Anzahl Zeichen + Anzahl \n
    int gesZeichen = anzZeichen + anz_zeilen;
    
    char array[gesZeichen];
    int index = 0;
    for(int i = 1; i < anz_zeilen + 1; i++){
        for(int j = 0; j < i; j++){
            array[index] = 'x';
            index++;
        }
        array[index] = '\n';
        index++;
    }
    array[index] = '\0';
    printf("%s", array);
}
