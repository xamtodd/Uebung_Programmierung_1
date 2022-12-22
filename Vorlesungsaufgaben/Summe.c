#include<stdio.h>

int summe(int werte[], int n);

int main(){
    int werte[] = {0, 2, 4, 7, 9, 10, 12, 5};
    
    printf("%d", summe(werte, sizeof(werte) / sizeof(int)));
    
    return 0;
}

int summe(int werte[], int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum+=werte[i];
    }
    
    return sum;
}

