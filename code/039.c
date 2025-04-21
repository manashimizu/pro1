#include<stdio.h>
int yakusum1(int n, int i);

int main() {
    int a, b;
    scanf("%d", &a);
    b = yakusum1(a, a);
    printf("%dの約数の総和は%d\n", a, b);
}

int yakusum1(int n, int i){
    int a, z;
    if (n%i == 0) {
        a = i;
    } else {
        a = 0;
    }
    if (i>1) {
        z = a + yakusum1(n, i-1);
    } else {
        z = 1;
    }
    return z;
}