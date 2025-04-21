#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a%2==0) {
        printf("%dは偶数\n", a);
    } else {
        printf("%dは奇数\n", a);
    }
}