#include<stdio.h>

void reverse (int arr[], int);
void ausgeben(int arr[], int);

int main(){
    int arr[] = {1, 5, 0, 10, -2, 5, 8};
    ausgeben(arr, sizeof(arr) / sizeof(int));
    printf("\n");
    reverse(arr, sizeof(arr) / sizeof(int));
    ausgeben(arr, sizeof(arr) / sizeof(int));
    
    return 0;
}

void reverse (int arr[], int n){
    int arr2[n];
    for(int i = 0; i < n; i++){
        arr2[n - 1 - i] = arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr2[i];
    }
}

void ausgeben(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}
