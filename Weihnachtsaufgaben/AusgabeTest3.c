#include<stdio.h>

int main(){
    //Code aus dem Quiz
    int a = 32, b = 49, c = 13;

    if (a / 5 == 0) {
      b = 7;
    } else if (b / 3 == 0) {
      c = 17;
    } else {
      a = 42;
    }
    if (a + b < 10) {
      c *= -1;
    } else {
      b /= 2;
    }

    printf("%d %d %d", a, b, c);
    //Ausgabe 42 24 13
    
    return 0;
}
