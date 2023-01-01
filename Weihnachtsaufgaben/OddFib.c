#include<stdio.h>

int oddFibonacci (int n);

int main(){
    printf("%d\n", oddFibonacci(10));
    printf("%d\n", oddFibonacci(0));
    
    return 0;
}

int oddFibonacci (int n) {
    int fib1 = 1;
    int fib2 = 1;
    int fib3 = 0;
    
    int sum = 0;
    
    if(n == 0 || n < 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }
    
    sum = 1;
    
    for(int i = 0; i < n; i++){
        fib3 = fib1 + fib2;
        //printf("%d\n", fib3);
        if(fib3 % 2 != 0){
            sum+=fib3;
        }
        fib1 = fib2;
        fib2 = fib3;
    }
    
    return sum;
}
