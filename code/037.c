#include<stdio.h>
int digitsum(int n);

int main() {
    int a, b;
    scanf("%d", &a);
    b = digitsum(a);
    printf("%dの各桁の総和は%d\n", a, b);
}

int digitsum(int n){
    int z;
    if (n>=10) {
        z = n%10 + digitsum(n/10);
    } else {
        z = n;
    }
    return z;
}