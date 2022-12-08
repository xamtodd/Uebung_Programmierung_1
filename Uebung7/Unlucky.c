#include<stdio.h>
#include<stdbool.h>

bool unlucky1 (int arr[], int);

int main(){
    int arr[] = {2, 1, 3, 4, 5};
    printf("%s\n", unlucky1(arr, sizeof(arr) / sizeof(int)) ? "true" : "false");
    int arr2[] = {1, 1, 8};
    printf("%s\n", unlucky1(arr2, sizeof(arr2) / sizeof(int)) ? "true" : "false");
    int arr3[] = {1, 1, 3};
    printf("%s\n", unlucky1(arr3, sizeof(arr3) / sizeof(int)) ? "true" : "false");
    
    return 0;
}

bool unlucky1 (int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            if(i < n - 1){
                if(arr[i + 1] == 3){
                    return 1;
                }
            }
        }
    }
    return 0;
}
