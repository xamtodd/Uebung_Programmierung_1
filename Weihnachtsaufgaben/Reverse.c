#include<stdio.h>

void reverse (char text[]);

int main(){
    reverse("Weihnachtsbaum\n");
    
    return 0;
}

void reverse (char text[]) {
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%c", text[j]);
    }
}
