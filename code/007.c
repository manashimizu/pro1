#include<stdio.h>

int main() {
    float height, radius, pi;
    scanf("%f%f", &height, &radius);
    pi = 3.14;
    printf("体積は%.2f\n表面積は%.2f\n", radius*radius*pi*height, 2*radius*pi*height+radius*radius*pi*2);
}