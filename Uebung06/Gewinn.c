#include<stdio.h>

int gewinn(int, int, int);

int main(){
    printf("%d\n", gewinn(1, 2, 3));
    printf("%d\n", gewinn(1, 1, 0));
    printf("%d\n", gewinn(0, 0, 0));
    
    return 0;
}

int gewinn(int a, int b, int c){
    if((a == b) && (b == c)){
        return 20;
    }else if((a == b) || (a == c) || (b == c)){
        return 10;
    }else{
        return 0;
    }
}
