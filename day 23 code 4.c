#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n')
            freq[(int)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d\n", max);

    return 0;
}