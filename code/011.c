#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a>=b && a>=c) {
        printf("最大値は%d\n", a);
    } else if (b>=a && b>=c) {
        printf("最大値は%d\n", b);
    } else {
        printf("最大値は%d\n", c);
    }
}