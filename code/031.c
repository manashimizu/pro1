#include<stdio.h>
int comp(int x, int y);

int main() {
    int x, y, a;
    scanf("%d%d", &x, &y);
    a = comp(x, y);
    switch (a) {
    case -1:
        printf("%d\n%d\n", x, y);
        break;
    case 0:
        printf("%d\n%d\n", x, y);
        break;
    case 1:
        printf("%d\n%d\n", y, x);
        break;
    default:
        break;
    }
}

int comp(int x, int y){
    int z;
    if (x<y) {
        z = -1;
    } else if (x==y) {
        z = 0;
    } else {
        z = 1;
    }
    return z;
}