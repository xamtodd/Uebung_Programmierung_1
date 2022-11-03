#include <stdio.h>
#include <stdbool.h>

int main(){
    int wert1;
    int wert2;
    bool b = true;
    
    while(b){
        printf("Geben Sie den ersten Wert ein: ");
        scanf("%i", &wert1);
        printf("Geben Sie den zweiten Wert ein: ");
        scanf("%i", &wert2);
        
        if(wert1 <= wert2){
            b = false;
        }
        
        printf("Der erste Wert muss kleiner sein!\n");
    }
    
    if(wert1 == wert2){
        printf("Pasch %i", wert1);
    }else if(wert1 == 1 && wert2 == 2){
        printf("Maexchen");
    }else{
        if(wert1 > wert2){
            printf("%i%i", wert1, wert2);
        }else{
            printf("%i%i", wert2, wert1);
        }
    }
    
    return 0;
}
