#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float x = (a+b+c)/2;
    printf("%.2f", sqrt(x*(x-a)*(x-b)*(x-c)));
}