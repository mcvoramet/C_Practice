#include <stdio.h>

float discount(float price, int percentage);

int main(void){

    float regular;
    int percent_off;

    printf("Regular Price: ");
    scanf("%f", &regular);

    printf("Percent off: ");
    scanf("%i", &percent_off);
    
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);

}

// this function will return a float type
float discount(float price, int percentage){
    
    return price * (100-percentage)/100;

}