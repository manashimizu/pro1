#include<stdio.h>
void line4(int n);
void tri4(int n, int m);

int main(){
    int n;
    scanf("%d", &n);
    tri4(1, n);
}

void line4(int n){
    if (n>1) {
        printf("*");
        line4(n-1);
    } else {
        printf("*\n");
    }
}

void tri4(int n, int m){
    if (n<m) {
        line4(n);
        tri4(n+1, m);
        line4(n);
    } else {
        line4(m);
    }
}