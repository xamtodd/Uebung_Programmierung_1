#include<stdio.h>

int ggT(int, int);
int kgV(int, int);

int main(){
    printf("ggT(12, 10) = %d\n", ggT(12, 10));
    printf("kgV(12, 10) = %d\n", kgV(12, 10));
    
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

int kgV(int a, int b){
    return (a * b) / ggT(a, b);
}
