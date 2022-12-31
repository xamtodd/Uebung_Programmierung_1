#include<stdio.h>

int main(){
    //Code aus dem Quiz
    int a = 33, b = 52, c = 9;

    a = b % c;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    b /= c;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = (b < c) ? 1 : -1;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    c = b * a - c / a + b / 3;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    b = ++a + c;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
