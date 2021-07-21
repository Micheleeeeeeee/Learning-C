#include <stdio.h>
#include <stdlib.h>

void printEmpty();

int main() {
    
    char vowels[] = {'A', 'E', 'I', 'O', 'U'}; //Array of vowels... obviously
    int i = 0;
    char *pvowels = vowels; // Pointer to vowels

    printf("pvowels: %p\n", pvowels); // 0x16d5976d4
    printf("pvowels: %s\n", pvowels); // AEIOU
    
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("%d", i);
    }
    
    for (i = 0; i < 5; i++) {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }
    
    for (i = 0; i < 5; i++) {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }
    
    /**
     Analysis
     
     &vowels[i] is the memory location of the ith element in the vowels. As it's a character array, each element uses one byte so the memory addresses are separated by a single byte.
     
     Example:
     0x0000000000000000
     0x0000000000000001
     0x0000000000000002
     
     pvowels has been assigned the address of vwels. pvowels + i
     */
    

    return EXIT_SUCCESS;
}

void printEmpty() {
    int i;

    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}
