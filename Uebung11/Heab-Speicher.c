#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = (int*) malloc(20 * sizeof(int));
    
    if(ptr){
        for(int i = 0; i < 20; i++){
            ptr[i] = 0;
        }
        
        free(ptr);
    }
    
    return 0;
}
