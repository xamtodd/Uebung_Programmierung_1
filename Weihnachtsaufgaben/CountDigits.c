#include<stdio.h>

void countDigits (int zahl);

int main(){
    countDigits(122333);
    
    return 0;
}

void countDigits (int zahl) {
    if(zahl < 0){
        zahl = zahl * (-1);
    }
    if(zahl == 0){
        printf("Ziffer 0: 1\n");
    }
    int ziffern[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(zahl > 0){
        ziffern[zahl % 10]++;
        zahl /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(ziffern[i] != 0){
            printf("Ziffer %d: %d\n", i, ziffern[i]);
        }
    }
}
