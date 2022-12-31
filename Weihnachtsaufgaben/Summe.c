#include<stdio.h>

int sumElements(int array[], int len);

int main(){
    printf("%d", sumElements((int []) {1, 2, 3}, 3));
    
    return 0;
}

int sumElements(int array[], int len){
    int sum = 0;
    
    for(int i = 0; i < len; i++){
        sum+=array[i];
    }
    
    return sum;
}
