#include <stdio.h>

int main(void){
    // Prompt user to agree
    char c;
    printf("Do you agree? ");
    scanf("%s", &c);
    if (c=='y' || c=='Y'){
        printf("Agreed.\n");
    
    }
    else if (c == 'n' || c=='N'){
        printf("Not agreed.\n");
    }
    else{l
        printf("Invalid answer only permit 'y' or 'n' \n" );
    }
}