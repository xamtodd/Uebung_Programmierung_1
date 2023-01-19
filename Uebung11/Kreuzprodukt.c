#include <stdio.h>
#define DIM 3
typedef float Vec3[DIM];

void cross(Vec3 c, Vec3 a, Vec3 b){
    c[0] = a[1] * b[2] - b[1] * a[2];
    c[1] = a[0] * b[2] - b[0] * a[2];
    c[2] = a[0] * b[1] - b[0] * a[1];
}

int main() {
    Vec3 u = {1, 0, 0};
    Vec3 v = {0, 1, 0};
    Vec3 w;
    cross(w, u, v);
    printf("{%f, %f, %f}^T\n", w[0], w[1], w[2]);
    cross(u, u, v);
    printf("{%f, %f, %f}^T\n", u[0], u[1], u[2]);
    
    return 0;
}

