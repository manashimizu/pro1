#include<stdio.h>
int factorial(int n);

int main() {
    int x, y;
    scanf("%d", &x);
    y = factorial(x);
    printf("%d!=%d\n", x, y);
}

int factorial(int n){
    int a;
    if (n>1) {
        a = n * factorial(n-1);
    } else {
        a = 1;
    }
    return a;
}