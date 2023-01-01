#include<stdio.h>

float flaecheDreieck (float basis, float hoehe);

int main(){
    printf("%.2f\n", flaecheDreieck(10.0, 15.0));
    printf("%.2f\n", flaecheDreieck(17.0, 8.0));
    
    return 0;
}

float flaecheDreieck (float basis, float hoehe) {
    return 0.5 * basis * hoehe;
}
