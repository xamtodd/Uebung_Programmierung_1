#include<stdio.h>

int rundeSumme(int, int, int);
int runde10(int);

int main(){
    printf("Summe: %d\n", rundeSumme(12, 18, 1));
    
    return 0;
}

int rundeSumme(int a, int b, int c){
    return runde10(a) + runde10(b) + runde10(c);
}

int runde10(int n){
    if((n % 10) > 4){
        //aufrunden
        return n + (10 - (n % 10));
        
    }else{
        //abrunden
        return n - (n % 10);
    }
}
