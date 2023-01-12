#include <stdio.h>

int main(){
    for(int x = 1; x < 100; x++){
        if(((x * x * x) - 73 * (x * x) + 1655 * x - 11951) == 0){
            printf("%d\n", x);
        }
    }
    
    return 0;
}
