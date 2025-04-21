#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a>=b && a>=c) {
        printf("最大値は%d\n", a);
        if (b<=c) {
            printf("最小値は%d\n", b);
        } else {
            printf("最小値は%d\n", c);
        }
    } else if (b>=a && b>=c) {
        printf("最大値は%d\n", b);
        if (c<=a) {
            printf("最小値は%d\n", c);
        } else {
            printf("最小値は%d\n", a);
        }
    } else {
        printf("最大値は%d\n", c);
        if (a<=b) {
            printf("最小値は%d\n", a);
        } else {
            printf("最小値は%d\n", b);
        }
    }
}