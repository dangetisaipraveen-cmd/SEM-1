#include <stdio.h>

int main() {
    int n, original, r, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }

    if (s == original) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
