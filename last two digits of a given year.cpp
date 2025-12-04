#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    int lastTwo = year % 100;

    printf("%02d", lastTwo);
    
    return 0;
}

