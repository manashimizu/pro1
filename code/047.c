#include<stdio.h>
void line2(int n);
void tri2(int n);

int main(){
    int n;
    scanf("%d", &n);
    tri2(n);
}

void line2(int n){
    if (n>1) {
        printf("*");
        line2(n-1);
    } else {
        printf("*\n");
    }
}

void tri2(int n){
    if (n>1) {
        tri2(n-1);
        line2(n);
    } else {
        line2(1);
    }
}