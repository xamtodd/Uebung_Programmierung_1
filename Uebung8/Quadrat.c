#include<stdio.h>
#include<string.h>

int quad(char art[], int width);

int main(){
    int width = 5;
    char art[width * (width + 1)];
    quad(art, width);
    printf("%s", art);
    
    return 0;
}

int quad(char art[], int width){
    int index = 0;
    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            art[index++] = 'x';
        }
        art[index++] = '\n';
    }
    art[index] = '\0';
    return strlen(art);
}
