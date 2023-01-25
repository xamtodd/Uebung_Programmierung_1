#include <stdio.h>

int ackermann(int n, int m){
    if(n == 0){
        return m + 1;
    }else if(m == 0){
        return ackermann(n - 1, 1);
    }else{
        return ackermann(n - 1, ackermann(n, m - 1));
    }
}


int main() {
    printf("%d\n", ackermann(3, 4));
    
    return 0;
}
