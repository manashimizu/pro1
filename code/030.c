#include<stdio.h>
#include<math.h>
float heron(float a, float b, float c);
float length(float x, float y);

int main() {
    float x1, y1, x2, y2, x3, y3, x, y, z, s;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    x = length(x2-x3, y2-y3);
    y = length(x1-x3, y1-y3);
    z = length(x1-x2, y1-y2);
    s = heron(x, y, z);
    printf("三角形の面積は%.2f", s);
}

float heron(float a, float b, float c){
    float x;
    x = (a+b+c)/2;
    return sqrt(x*(x-a)*(x-b)*(x-c));
}

float length(float x, float y){
    float z;
    z = sqrt(x*x+y*y);
    return z;
}