#include <stdio.h>

int main(){
    int x, sum = 0;
    
    printf("Geben Sie eine Zahl ein: ");
    scanf("%i", &x);
    printf("\n");
    
    for(int i = 0; i <= x; i++){
        if((x % i) == 0){
            //printf("%i\n", i);
            sum += i;
        }
    }
    
    printf("%i", sum);
    
    return 0;
}
