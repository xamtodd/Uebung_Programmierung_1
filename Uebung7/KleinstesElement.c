#include<stdio.h>

int kleinstes (int arr[], int);
int zweitkleinstes (int arr[], int);

int main(){
    int arr[] = {10, 2, -1, 4, 5};
    printf("Der Index des kleinsten Element ist: %d.\n", kleinstes(arr, sizeof(arr) / sizeof(int)));
    printf("Der Index des zweit kleinsten Element ist: %d.\n", zweitkleinstes(arr, sizeof(arr) / sizeof(int)));
    return 0;
}

int kleinstes (int arr[], int n){
    if(n != 0){
        int min = arr[0];
        int minIndex = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] < min){
                min = arr[i];
                minIndex = i;
            }
        }
        return minIndex;
    }
    printf("Fehler\n");
    return 0;
}

int zweitkleinstes (int arr[], int n){
    if(n != 0){
        int min2 = arr[0];
        int minIndex = kleinstes(arr, n);
        int min2Index = 0;
        
        for(int i = 0; i < n; i++){
            if(i != minIndex){
                if(arr[i] < min2){
                    min2 = arr[i];
                    min2Index = i;
                }
            }
        }
        return min2Index;
    }
    printf("Fehler\n");
    return 0;
}
