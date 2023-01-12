#include<stdio.h>

void swap (int arr1[], int arr2[], int);
void ausgeben(int arr1[], int arr2[], int);

int main(){
    int arr1[] = {0, 1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8, 9};
    
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    
    if(len1 == len2){
        ausgeben(arr1, arr2, len1);
        printf("\n");
        printf("------------------------\n");
        printf("\n");
        swap(arr1, arr2, len1);
        ausgeben(arr1, arr2, len1);
    }
    
    return 0;
}

void swap (int arr1[], int arr2[], int len){
    int arr3[len];
    
    //Inhalt des arr1 in dem Hilfsfeld arr3 speichen
    for(int i = 0; i < len; i++){
        arr3[i] = arr1[i];
    }
    
    //Da arr1 gesichert ist kann nun arr1 ueberschieben werden
    for(int i = 0; i < len; i++){
        arr1[i] = arr2[i];
    }
    
    //Da arr3 wird nun in arr2 gespeichert
    for(int i = 0; i < len; i++){
        arr2[i] = arr3[i];
    }
}

void ausgeben(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr2[i]);
    }
}
