#include<stdio.h>

void haeufigkeit();

int main(){
    haeufigkeit(12345556);
    
    return 0;
}

void haeufigkeit(int i){
    int counter[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(i > 0){
        counter[i % 10]++;
        i = i / 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d Anzahl => %d\n", i, counter[i]);
    }
}

