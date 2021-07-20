#include <stdio.h>


int main() {
    
    // int foo; Initialise empty var
    int bar = 1; // Initialise bar with value 1
    
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    
    a = b - c + d * e;
    
    printf("%d", bar);
    
    for (int i = 0; i < 3; i++) {
        printf("");
    }
    
    printf("%d", a);
    
    return 0;
}
