#include<stdio.h>
int sum1(int n);

int main() {
    int x, y;
    scanf("%d", &x);
    y = sum1(x);
    printf("%dまでの総和は%d\n", x, y);
}

int sum1(int n){
    int a;
    if (n>1) {
        a = n + sum1(n-1);
    } else {
        a = 1;
    }
    return a;
}