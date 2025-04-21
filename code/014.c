#include<stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a >= b+c) {
        printf("Error\n");
    } else if  (a*a < b*b+c*c){
        printf("鋭角三角形\n");
    } else if (a*a > b*b+c*c){
        printf("鈍角三角形\n");
    } else {
        printf("直角三角形\n");
    }
}