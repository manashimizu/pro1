#include<stdio.h>
int sum2(int m, int n);

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = sum2(a, b);
    printf("%dから%dまでの総和は%d\n", a, b, c);
}

int sum2(int m, int n){
    int x;
    if (n>m) {
        x = n + sum2(m, n-1);
    } else {
        x = m;
    }
    return x;
}