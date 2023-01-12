#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Geben Sie eine Laenge an: ");
    scanf("%i", &a);
    printf("Geben Sie eine Breite an: ");
    scanf("%i", &b);
    printf("\n");
    
    int U = 2 * a + 2 * b;
    int A = a * b;

    printf("Das Rechteck mit der Breite %i und der Laenge %i hat den Unfang %i und die Flaeche %i.", a, b, U, A);

    return 0;
}


