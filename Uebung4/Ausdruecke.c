#include <stdio.h>
#include <stdbool.h>

int main(){
    int x = 1, y = 2;
    bool z = true;
    
    //printf("%d\n", ((y++) * 5) + y);    //13
    //printf("%d\n", (y * 5) % (++y));    //1
    //printf("%d\n", (y++) - (y--));    //-1
    //printf("%d\n", ((x * 5) < y) || (z && (x > y)));    //false
    //printf("%d\n", (x = (y = (y + 1)))); //3
    
    return 0;
}
