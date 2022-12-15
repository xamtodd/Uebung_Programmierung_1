#include<stdio.h>
#include<string.h>

int quad(char art[][1000], int width);
void ausgeben(char art[][1000], int width);

int main(){
    int width = 5;
    char art[width][1000];
    quad(art, width);
    ausgeben(art, width);
    
    return 0;
}

int quad(char art[][1000], int width){
    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            art[i][j] = 'x';
        }
    }
    return width * width;
}

void ausgeben(char art[][1000], int width){
    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            printf("%c", art[i][j]);
        }
        printf("\n");
    }
}
