#include<stdio.h>
#include<stdbool.h>

bool firstLast8 (int arr[], int);

int main(){
    int arr[] = {8, 0, -1, 2, 0, 22};
    printf("%s\n", firstLast8(arr, (sizeof(arr) / sizeof(int))) ? "true" : "false");
    
    return 0;
}

bool firstLast8 (int arr[], int n){
    if(n > 0){
        return arr[0] == 8 || arr[n - 1] == 8;
    }else{
        return false;
    }
}
