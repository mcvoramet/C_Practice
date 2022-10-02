#include <stdio.h>

int main(void){
   char answer;
   printf("What's your name? "); 
   scanf("%s", &answer);
   printf("Hello, %s\n", &answer);
} 