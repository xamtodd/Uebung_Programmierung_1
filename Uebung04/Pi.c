#include <stdio.h>
#include <math.h>

int main() {
    double Pi = 0;
    
    //Leibniz - Reihe
    for(int i = 0; i <= 1000000; i++){
        Pi += (pow(-1,i) / ((2 * i) + 1));
    }
    
    Pi *= 4;
    
    printf("Pi ist ungefaehr: %.100lf\n", Pi);
    
    
    //Wallis'sches Produkt
    Pi = 1;
    for(int i = 1; i <= 1000000; i++){
        Pi *= (1 + (1 / ((4 * pow(i, 2)) - 1)));
    }
    
    Pi *= 2;
    
    printf("Pi ist ungefaehr: %.100lf\n", Pi);
    
    return 0;
}
