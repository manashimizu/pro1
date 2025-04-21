#include<stdio.h>

int main() {
    float radius, pi;
    scanf("%f", &radius);
    pi = 3.14;
    printf("円の円周は%.3f\n円の面積は%.3f\n球の体積は%.3f\n球の表面積は%.3f\n", 2*radius*pi, radius*radius*pi, 4*radius*radius*radius*pi/3, 4*radius*radius*pi);
}