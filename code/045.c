#include<stdio.h>
int reverse4(int x, int y);

int main() {
    int a, b;
    scanf("%d", &a); 
    b = reverse4(a, 0);
    printf("%d\n", b);
}

int reverse4(int x, int y){
    int z;
    if (x>0) {
        z = reverse4(x/10, y*10+x%10);
    } else {
        z = y;
    }
    return z;
}