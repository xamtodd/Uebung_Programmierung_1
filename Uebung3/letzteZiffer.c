#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%i", &a);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%i", &b);
    printf("\n");
    
    if((a % 10) == (b % 10)){
        printf("Letzte Ziffer gleich");
    }
    
    return 0;
}
