#include <stdio.h>

int main(void){
    int n;
    do{
        printf("Size: ");
        scanf("%i", &n);
    }
    while (n<1);
    // For each row
    for (int i = 0; i<n; i++){
        // For each column
        for (int j = 0; j<n; j++){
            // Print the brick
            printf("#");
        }
        // Move to next row
        printf("\n");
    }
    

}