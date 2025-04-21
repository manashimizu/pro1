#include<stdio.h>
float triarea(float x, float y);

int main() {
    float x1, y1, x2, y2, s1, s2, s3, r;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    if (y1>y2) {
        s1 = triarea(x1-x2, y1-y2);
        r = (x1-x2) * y1;
    } else {
        s1 = triarea(x1-x2, y2-y1);
        r = (x1-x2) * y2;
    }
    s2 = triarea(-x2, y2);
    s3 = triarea(x1, y1);
    printf("三角形の面積は%.2f\n", r-s1-s2-s3);
}

float triarea(float x, float y){
    float z;
    z = x * y / 2;
    return z;
}