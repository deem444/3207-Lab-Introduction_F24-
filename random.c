#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char randchar() {
    
    // srand(time(NULL));
    // Generate a random character between 'A' and 'Z'
    return 'A' + (random() % 26);
}

int main() {
    
    srand(time(NULL));
    // Number of random characters to generate
    int num_chars = 7;
    
    // Generate and print random characters using randchar
    for (int i = 0; i < num_chars; ++i) {
        char c = randchar();
        printf("%c", c);
    }

    return 0;
}