#include<stdio.h>

double area(double basis, double hoehe);

int main(){
    printf("%lf", area(10, 5));
    
    return 0;
}

double area(double basis, double hoehe){
    return 0.5 * (basis * hoehe);
}
