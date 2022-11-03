#include <stdio.h>

int main(){
    int wert;
    
    printf("Geben Sie eine Zahl ein: ");
    scanf("%i", &wert);
    
    int rest = wert % 57;
    
    if(rest == 0){
        printf("Rest: %i Schertzkeks", rest);
    }else{
        printf("Rest: %i", rest);
    }
    
    return 0;
}
