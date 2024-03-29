#include <stdio.h>

//Summationsfunktion
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}

//Fakultaet
int fakultaet(int n){
    if(n == 0){
        return 1;
    }
    return n * fakultaet(n - 1);
}

//Fibonacci Zahlen
int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("Summenbildung von 1 - 100: %d\n", sum(100));
    printf("Fakultaet von 10: %d\n", fakultaet(10));
    printf("Fibbonacci von n = 12: %d\n", fibonacci(12));
    
    return 0;
}

