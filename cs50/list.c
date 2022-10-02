#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *list = malloc(3 * sizeof(int));  // Allocate memory fo an array of 3 integers

    if(list==NULL){     // Error checking
        return 1;
    }

    list[0]=1;
    list[1]=2;
    list[2]=3;

    // Pointer Arithmetic (Another way to writing above code)
    //*list = 1;  //go to list's address and put 1 there
    //*(list+1) = 2; //go to list's address + 1 and put 3 there
    //*(list+2) = 3;

     int *tmp = malloc(4 * sizeof(int));  //Allocate for 4 integers

     if(tmp==NULL){
         free(list);       // Another error checking
         return 1;
     }
     for(int i=0; i<3; i++){
         tmp[i] = list[i];   // Copy original chunk of memory to temporary chunk of memory
     }
     tmp[3] = 4;    // Add fourth number to fourth location

     free(list);   // Free the original list and give back to the computer original chunk of memory

     list = tmp;

     for(int i=0; i<4; i++){
         printf("%i\n", list[i]);
     }

}