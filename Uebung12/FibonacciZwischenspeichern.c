#include <stdio.h>

int fibonacciZwischenspeichern (int n, int array[]){
    if(n == 0){
        return 0;
    }else if(n == 1){
        array[1] = 1;
        return 1;
    }else if(array[n] == 0){
        int m = fibonacciZwischenspeichern(n - 1, array) + fibonacciZwischenspeichern(n - 2, array);
        array[n] = m;
    }
    return array[n];
}


int main() {
    int array[100] = {0};
    int n = 10;
    int res = fibonacciZwischenspeichern(n, array);
    printf("fib = %d\n", res);
    
    for(int i = 0; i <= n; i++){
        printf("n = %d; fib = %d\n", i, array[i]);
    }
    
    return 0;
}

