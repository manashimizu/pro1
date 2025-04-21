#include<stdio.h>
void reverse1();

int main() {
    reverse1();
}

void reverse1(){
    int a;
    scanf("%d", &a);
    if (a>0) {
        reverse1();
    }
    printf("%d\n", a);
}