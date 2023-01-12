#include<stdio.h>

int countOdds (int f[], int);

int main(){
    int f[] = {1, 0, -2, 5, 6 ,9, 8, 7};
    printf("Das Feld hat %d ungerade Elemente.\n", countOdds(f, (sizeof(f) / sizeof(int))));
    int g[] = {1, 3};
    printf("Das Feld hat %d ungerade Elemente.\n", countOdds(g, (sizeof(g) / sizeof(int))));
    
    return 0;
}

int countOdds (int f[], int n){
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(f[i] % 2 != 0){
            printf("%d\n", f[i]);
            counter++;
        }
    }
    return counter;
}
