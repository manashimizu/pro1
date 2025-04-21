#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float d = b*b-4*a*c;
    if (d>0) {
        printf("解は%.3fと%.3f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    } else if (d<0) {
        printf("解は%.3f±%.3fi", -b/(2*a), sqrt(-d)/(2*a));
    } else {
        printf("解は%.3fのみ", -b/(2*a));
    }
}