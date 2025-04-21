#include<stdio.h>
void reverse2(int a);

int main() {
    int n;
    scanf("%d", &n); 
    reverse2(n);
    printf("\n");
}

void reverse2(int n){
    if (n>=10) {
        printf("%d", n%10);
        reverse2(n/10);
        printf("%d", n%10);
    } else {
        printf("%d%d", n, n);
    }
}