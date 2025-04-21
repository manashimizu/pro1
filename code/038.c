#include<stdio.h>
int euclid(int x, int y);

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = euclid(a, b);
    printf("最大公約数は%d\n", c);
}

int euclid(int x, int y){
    int z;
    if (x>y) {
        if (y!=0) {
            z = euclid(y, x%y);
        } else {
            z = x;
        }
    } else {
        if (x!=0) {
            z = euclid(x, y%x);
        } else {
            z = y;
        }
    }
    return z;
}