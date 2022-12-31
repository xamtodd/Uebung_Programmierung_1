#include<stdio.h>

void schaltjahr(int jahr);

int main(){
    schaltjahr(2020);
    schaltjahr(2023);
    
    return 0;
}

void schaltjahr(int jahr){
    if((jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0){
        printf("Schaltjahr\n");
    }else{
        printf("Kein Schaltjahr\n");
    }
}
