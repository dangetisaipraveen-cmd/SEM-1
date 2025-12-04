#include <stdio.h>

int main() {
    int base, height;
    scanf("%d", &base);
    scanf("%d", &height);

    int area = (base * height) / 2;

    printf("%d", area);

    return 0;
}
