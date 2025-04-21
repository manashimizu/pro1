#include<stdio.h>
int checktri(float x, float y, float z);

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    int d = checktri(a, b, c);
    switch (d) {
    case 0:
        printf("Error\n");
        break;
    case 1:
        printf("直角三角形\n");
        break;
    case 2:
        printf("鋭角三角形\n");
        break;
    case 3:
        printf("鈍角三角形\n");
        break;
    default:
        break;
    }
}

int checktri(float x, float y, float z){
    int a;
    if (x >= y+z) {
        a = 0;
    } else if (x*x == y*y+z*z) {
        a = 1;
    } else if (x*x < y*y+z*z) {
        a = 2;
    } else {
        a = 3;
    }
    return a;
}