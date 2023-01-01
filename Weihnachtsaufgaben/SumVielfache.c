#include<stdio.h>

int sumVielfache (int n);

int main(){
    printf("%d", sumVielfache(1000));
    
    return 0;
}


int sumVielfache (int n) {
    int i = 0;
    int sum = 0;
    while(i < n){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
        i++;
    }
    return sum;
}
