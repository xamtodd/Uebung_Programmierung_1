#include<stdio.h>

int secondLargest (int array[], int len);

int main(){
    printf("%d", secondLargest((int[]) {-17, 25, 11, 4, 0, -23}, 6));
    
    return 0;
}

int secondLargest (int array[], int len){
    int max, secMax = array[0];
    
    for(int i = 0; i < len; i++){
        if(array[i] > max){
            secMax = max;
            max = array[i];
        }else if(array[i] > secMax && array[i] < max){
            secMax = array[i];
        }
    }
    
    return secMax;
}
