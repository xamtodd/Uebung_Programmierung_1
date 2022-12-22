#include<stdio.h>

int zweitgroessteElement(int zahlen[], int size);

int main(){
    int zahlen[] = {6, 7, 9, 100, 23, 5};
    printf("%d", zweitgroessteElement(zahlen, sizeof(zahlen) / sizeof(int)));
    
    return 0;
}

int zweitgroessteElement(int zahlen[], int size){
    int max, secMax = zahlen[0];
    
    for(int i = 0; i < size; i++){
        if(zahlen[i] > max){
            secMax = max;
            max = zahlen[i];
        }else if(zahlen[i] > secMax && zahlen[i] < max){
            secMax = zahlen[i];
        }
    }
    
    return secMax;
}
