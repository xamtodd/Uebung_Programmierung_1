#include<stdio.h>

int minOfThree (int a, int b, int c);

int main(){
    printf("%d\n", minOfThree(23, 54, 45));
    printf("%d\n", minOfThree(11, 24, 32));
    
    return 0;
}

int minOfThree (int a, int b, int c) {
    if(a <= b){
        if(a <= c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b <= c){
            return b;
        }else{
            return c;
        }
    }
}
