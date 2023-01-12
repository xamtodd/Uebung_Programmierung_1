#include <stdio.h>

int main(){
    int alter;
    printf("Geben Sie ihr Alter ein: ");
    scanf("%i", &alter);
    printf("\n");
    
    if(alter < 60){
        printf("Jungspund");
    }else{
        printf("Oldtimer");
    }
    return 0;
}
