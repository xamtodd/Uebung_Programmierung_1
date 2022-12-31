#include<stdio.h>

int main(){
    int x = 10, y = 20;
    for (int z = 0; z < y; z++) {
      if (z == x) {
        printf("%d", z);
      } else {
        break;
      }
    }
    printf("%d", y);
    //Ausgabe 20
}
