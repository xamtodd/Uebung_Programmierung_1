#include <stdio.h>

//Rekursive Berechnung des Minimums aller Zahlen im Array
int minimumRek(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int m = minimumRek(arr, n - 1);
    return (arr[n-1] < m) ? arr[n-1] : m;
}

//Iterative Berechnung des Minimums aller Zahlen im Array
int minimumIter(int arr[], int n) {
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

//Rekursive Berechnung des Produkts aller Zahlen im Array
int produktRek(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    return arr[n - 1] * produktRek(arr, n - 1);
}

//Iterative Berechnung des Produkts aller Zahlen im Array
int produktIter(int arr[], int n){
    int produkt = 1;
    for(int i = 0; i < n; i++){
        produkt *= arr[i];
    }
    return produkt;
}

int main() {
    int arr[] = {-7, 8, 10, 11, -21, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minRek = minimumRek(arr, n);
    printf("%d\n", minRek);
    
    int minIter = minimumIter(arr, n);
    printf("%d\n", minIter);
    
    int produktR = produktRek(arr, n);
    printf("%d\n", produktR);
    
    int produktI = produktIter(arr, n);
    printf("%d\n", produktI);
    
    return 0;
}

