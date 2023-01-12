#include<stdio.h>
#include<stdbool.h>

bool mauern(int, int, int);

int main(){
    printf("mauern(3, 1, 8) -> %s\n", (mauern(3, 1, 8)) ? "true" : "false");
    printf("mauern(3, 1, 9) -> %s\n", (mauern(3, 1, 9)) ? "true" : "false");
    printf("mauern(3, 2, 10) -> %s\n", (mauern(3, 2, 10)) ? "true" : "false");
    
    return 0;
}

bool mauern (int klein, int gross, int ziel){
    //Wenn Gesammtlaenge passt und Anzahl der kleinen Steine passt => true
    return (((klein + 5 * gross) >= ziel) && (klein >= ziel - 5 * gross));
}
