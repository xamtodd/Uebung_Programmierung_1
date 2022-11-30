#include<stdio.h>

int ggT(int a, int b);

int main(){
    printf("%d", ggT(12, 10));
    
    return 0;
}

int ggT(int a, int b){
    //euklidischen Algorithmus
    while(b != 0) {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}
