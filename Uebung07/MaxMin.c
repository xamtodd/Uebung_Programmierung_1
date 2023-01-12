#include<stdio.h>

int max(int array[], int);
int min(int array[], int);

int main(){
    int array[] = {-1, 0 , -5, 10, 12 ,18, -8, 20, 55, -21};
    int n = sizeof(array) / sizeof(int);
    
    printf("Das Maximum ist: %d\n", max(array, n));
    printf("Das Minimum ist: %d\n", min(array, n));
    
    return 0;
}

int max(int array[], int n){
    int max = array[0];
    
    for(int i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    
    return max;
}

int min(int array[], int n){
    int min = array[0];
    
    for(int i = 0; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    
    return min;
}
