#include<stdio.h>
#include<string.h>

int quad(char art[], int width);

int main(){
    char art[1000];
    quad(art, 5);
    printf("%s", art);
    
    return 0;
}

int quad(char art[], int width){
    int index = 0;
    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            art[index++] = 'x';
            art[index++] = ' ';
        }
        art[index++] = '\n';
    }
    art[index] = '\0';
    return strlen(art);
}
