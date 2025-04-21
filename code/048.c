#include<stdio.h>
void line(int n);
void rec(int n, int m);

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    rec(n, m);
}

void line(int n){
    if (n>1) {
        printf("*");
        line(n-1);
    } else {
        printf("*\n");
    }
}

void rec(int n, int m){
    if (n>1) {
        line(m);
        rec(n-1, m);
    } else {
        line(m);
    }
}