#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int min, mid, max;
    if (a>=b && a>=c) {
        max = a;
        if (b<=c) {
            min = b;
            mid = c;
        } else {
            min = c;
            mid = b;
        }
    } else if (b>=a && b>=c) {
        max = b;
        if (c<=a) {
            min = c;
            mid = a;
        } else {
            min = a;
            mid = c;
        }
    } else {
        max = c;
        if (a<=b) {
            min = a;
            mid = b;
        } else {
            min = b;
            mid = a;
        }
    }
    printf("%d\n%d\n%d\n", min, mid, max);
}