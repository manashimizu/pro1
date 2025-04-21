#include<stdio.h>
int addsqr(int x, int y);

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = addsqr(a, b);
    printf("2乗和は%d\n", c);
}

int addsqr(int x, int y){
    int z;
    z = x*x + y*y;
    return z;
}