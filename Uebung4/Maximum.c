#include <stdio.h>
#include <stdbool.h>

//Version 1
/*
int main(){
    int max, temp, anz = 0;
    
    printf("Geben Sie die 1. Zahl ein: ");
    scanf("%d", &temp);
    max = temp;
    anz++;
    if(temp > 0){
        for(int i = 2; i <= 10; i++){
            printf("Geben Sie die %d. Zahl ein: ", i);
            scanf("%d", &temp);
            if(temp < 0){
                break;
            }
            anz++;
            if(max < temp){
                max = temp;
            }
        }
        if(anz < 10){
            printf("Error\n");
        }else{
            printf("Die groessete Zahl ist: %d\n", max);
        }
    }else{
        printf("Error\n");
    }
    return 0;
}
*/

//Version 2
int main(){
    int max = -1, temp;
    
    printf("Geben Sie die 1. Zahl ein: ");
    scanf("%d", &temp);
    if(temp > 0){
        max = temp;
    }
    for(int i = 2; i <= 10; i++){
        printf("Geben Sie die %d. Zahl ein: ", i);
        scanf("%d", &temp);
        if(temp < 0){
            continue;
        }else{
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(max > 0){
        printf("Die groessete Zahl ist: %d\n", max);
    }else{
        printf("Error\n");
    }
    
    return 0;
}

