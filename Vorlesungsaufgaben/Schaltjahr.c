#include<stdio.h>
#include<stdbool.h>

bool schaltjahr(int jahr);

int main(){
    printf("%s", schaltjahr(2056) ? "true" : "false");
    
    return 0;
}

bool schaltjahr(int jahr){
    if((jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0){
        return true;
    }else{
        return false;
    }
}
