#include<stdio.h>
void line(int n);

int main() {
    int n;
    scanf("%d", &n);
    line(n);
}

void line(int n){
    if (n>1) {
        printf("*");
        line(n-1);
    } else {
        printf("*\n");
    }
}