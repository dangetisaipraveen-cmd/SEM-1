#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int max_mangoes = (Z - Y) / X;

    printf("%d", max_mangoes);

    return 0;
}

