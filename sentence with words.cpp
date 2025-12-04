#include <stdio.h>

int main() {
    char sentence[200];
    int i = 0;

    printf("Enter a sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("%s",sentence);
}
    



