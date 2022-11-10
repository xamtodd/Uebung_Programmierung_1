#include <stdio.h>
#include <stdbool.h>

int main(){
    int i, quersumme = 0;
    bool fertig = false, eingabe = false;
    
    while(!eingabe){
        printf("Geben Sie eine Zahl ein: ");
        scanf("%d", &i);
        printf("\n");
        if(i > 0){
            eingabe = true;
        }
    }
    
    while(i > 0){
        quersumme = quersumme + (i % 10);
        i = i / 10;
    }
    
    printf("%i\n", quersumme);
    
    return 0;
}

