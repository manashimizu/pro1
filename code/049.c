#include<stdio.h>
int line3(int n);
int tri3(int n);

int main(){
    int n, a;
    scanf("%d", &n);
    a = tri3(n);
    printf("COUNT=%d", a);
}

int line3(int n){
    int a;
    if (n>1) {
        printf("*");
        a = 1 + line3(n-1);
    } else {
        printf("*\n");
        a = 1;
    }
    return a;
}

int tri3(int n){
    int a;
    if (n>1) {
        a = tri3(n-1) + line3(n);
    } else {
        a = line3(n);
    }
    return a;
}