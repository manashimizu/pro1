#include<stdio.h>

int main() {
    int head, foot;
    scanf("%d%d", &head, &foot);
    int crane = (4*head-foot)/2;
    int turtle = (foot-2*head)/2;
    if (crane>=0 && turtle>=0 && (4*head-foot)%2==0 && (foot-2*head)%2==0) {
        printf("つるの数は%d\nかめの数は%d\n", crane, turtle);
    } else {
        printf("Error\n");
    }
}