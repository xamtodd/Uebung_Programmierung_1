#include<stdio.h>
#include<stdbool.h>

bool firstLast8 (int arr[], int);

int main(){
    int arr[] = {8, 0, -1, 2, 0, 22};
    printf("%s\n", firstLast8(arr, (sizeof(arr) / sizeof(int))) ? "true" : "false");
    int arr2[] = {8, 0, -1, 2, 0, 8};
    printf("%s\n", firstLast8(arr2, (sizeof(arr2) / sizeof(int))) ? "true" : "false");
    int arr3[] = {0, 0, -1, 2, 0, 8};
    printf("%s\n", firstLast8(arr3, (sizeof(arr3) / sizeof(int))) ? "true" : "false");
    int arr4[] = {};
    printf("%s\n", firstLast8(arr4, (sizeof(arr4) / sizeof(int))) ? "true" : "false");
}

bool firstLast8 (int arr[], int n){
    if(n > 0){
        return (arr[0] == 8 && arr[n - 1] != 8) || (arr[0] != 8 && arr[n - 1] == 8);
    }else{
        return false;
    }
}
