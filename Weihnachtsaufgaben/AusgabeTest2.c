#include<stdio.h>

int main(){
    //Code aus dem Quiz
    int a = 7, b = 7, c = 4;

    switch (a % 3) {
      case 0: b = a * c;
              break;
      case 1: c = a * b;
              break;
      case 2: a = b * c;
      case 3: a += b * c;
              b = a * c;
              c = a * b;
              break;
      default: a = 0; b = 0; c = 0;
    }
    printf("%d %d %d", a, b, c);
    //7 7 49
    
    return 0;
}
