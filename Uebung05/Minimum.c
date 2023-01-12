#include <stdio.h>
#include <stdbool.h>

int main(){
    double eingabe;
    int counter = 1, min, temp;
    
    while(counter < 11){
        printf("Geben Sie eine Zahl ein: ");
        scanf("%lf", &eingabe);

        if(eingabe == (int)eingabe && eingabe >= 0){
            //Wenn das Programm hier ist, ist die Eingabe gueltig
            temp = (int)eingabe;
            if(min > temp || counter == 1){
                min = temp;
            }
            counter++;
        }
    }
    printf("Der kleinste Wert ist: %d", min);
    
    return 0;
}
