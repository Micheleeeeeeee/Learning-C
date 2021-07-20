#include <stdio.h>

/*
 type name[size1][size2]...[sizeN];
 */

int foo[1][2][3]; // Initialise multi-dimensional Array

int main() {
    
    char vowels[1][5] = { // Initialise multi-dimentional array with one row and five columns.
        {
            'a' // Put char 'a' in Row 0 Column 0
            , 'e' // Put char 'e' in Row 0 Column 1
            , 'i' // Put char 'i' in Row 0 Column 2
            , 'o' // Put char 'o' in Row 0 Column 3
            , 'u' // Put char 'u' in Row 0 Column 4
            
        }
        };
    
    char secondVowel = vowels[0][1];
    
    /**
     Two-Dimensional Array to store the vowels.
     
     One Row, Five Columns.
     */

    printf("The third column in the first row is: %c", secondVowel); // Print third column in row 0 ([0][2]);
    
    printf("\n");
    
    /**
     Initialising two-dimensional Arrays
     */
    
    int someTwoDimensionalArray[3][4] = { // Initialise two-dimensional array with 3 rows and 4 columns for each row.
        
        {0, 1, 2, 3} // Row 0
        , {4, 5, 6, 7} // Row 1
        , {8, 9, 10, 11} // Row 2
        
    };
    
    /*
     This:
     
     int someTwoDimensionalArray[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
     
     Is the same initialisation as the previous.
     */
    
    /**
     Accessing elements inside two-dimensional arrays.
     */
    
    int secondRowThirdColumn = someTwoDimensionalArray[1][2];
    
    printf("The third integer in the second row is %d", secondRowThirdColumn);
    
}
