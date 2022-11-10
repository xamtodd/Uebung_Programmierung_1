#include <stdio.h>

int main(){
    
    //Zahlen von 100 bis 200 ausgeben
    for(int i = 100; i <= 200; i++){
        printf("%d\n", i);
    }
    
    printf("-----------------------------------\n");
    
    //alle geraden Zahlen von 111 bis 222 ausgeben
    for(int i = 111; i <= 222; i++){
        if((i % 2) == 0){
            printf("%d\n", i);
        }
    }
    
    printf("-----------------------------------\n");
    
    //alle durch 3 teilbaren Zahlen von 333 bis 222 absteigend ausgeben
    for(int i = 333; i >= 222; i--){
        if((i % 3) == 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}

