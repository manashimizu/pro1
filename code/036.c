#include<stdio.h>
int fibo(int n);

int main() {
    int a, b;
    scanf("%d", &a);
    b = fibo(a);
    printf("fibo(%d)=%d\n", a, b);
}

int fibo(int n){
    int z;
    if (n>2) {
        z = fibo(n-1) + fibo(n-2);
    } else {
        z = 1;
    }
    return z;
}