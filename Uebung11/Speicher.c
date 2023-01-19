#include <stdio.h>

int main() {
    int x, n = 10, *y = &n;
    
    printf("Name | Speicheradresse | Wert | Typ\n");
    printf("x | %d | %d | int\n", &x, x);
    printf("n | %d | %d | int\n", &n, n);
    printf("*y | %d | %d | int Pointer\n", &y, &n);
    
    return 0;
}
