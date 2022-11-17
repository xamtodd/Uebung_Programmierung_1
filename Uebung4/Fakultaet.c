#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    int fakultaet;
    
    while(true){
        printf("Geben Sie eine Zahl ein: ");
        scanf("%d", &n);
        if(n >= 0){
            break;
        }
    }
    
    if(n > 0){
        for(int i = n; i > 0; i--){
            fakultaet *= i;
        }
    }else if(n == 0){
        fakultaet = 1;
    }
    
    printf("Die Fakultaet von %d ist: %d.", n, fakultaet);
    
    return 0;
}

//Fuer 64-Bit Maschinen reicht int bis n = 12 aus.
//int signed geht bis 2^31-1 und int unsigned geht bis 2^32-1
//long reicht bis n = 20.
//long long reicht vorzeichenlos bis 2^64 - 1.
//long long reicht mit Vorzeichen bis 2^63 - 1.
