#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a%b == 0) {
        printf("%d", a/b);
    } else if (a<b) {
        printf("%d分の%d", b, a);
    } else {
        printf("%dと%d分の%d", a/b, b, a%b);
    }
}