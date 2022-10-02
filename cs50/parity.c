#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    
    if (n%2 == 0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
}