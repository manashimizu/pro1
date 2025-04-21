#include<stdio.h>
void reverse3();

int main() {
    reverse3();
    printf("\n");
}

void reverse3(){
    int a;
    scanf("%d", &a);
    if (a>0) {
        reverse3();
        printf("%d", a);
    }
}