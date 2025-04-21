#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b+c) {
        printf("成立する\n");
    } else {
        printf("成立しない\n");
    }
}