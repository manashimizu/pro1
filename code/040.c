#include<stdio.h>
#include<math.h>
float root(float x, float y, float a);

int main() {
    float a, b;
    scanf("%f", &a);
    b = root(a, 1, a);
    printf("%.2f\n", b);
}

float root(float x, float y, float a){
    float z;
    if (fabs(x-y) < 0.00001) {
        z = x;
    } else {
        z = root((x+y)/2, (2*a)/(x+y), a);
    }
    return z;
}