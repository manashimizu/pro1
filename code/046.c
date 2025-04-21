#include<stdio.h>
void line1(int n);
void tri1(int n);

int main(){
    int n;
    scanf("%d", &n);
    tri1(n);
}

void line1(int n){
    if (n>1) {
        printf("*");
        line1(n-1);
    } else {
        printf("*\n");
    }
}

void tri1(int n){
    if (n>1) {
        line1(n);
        tri1(n-1);
    } else {
        line1(1);
    }
}