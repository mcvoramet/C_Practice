#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int number;
    struct node *next;

}
node;

int main(void){

    node *list=NULL; // Set it point to NULL so it doesn't point to any other garbage value which we can accidentally follow that pointer and mess up
    node *n = malloc(sizeof(node));  // sizeof() figure out how much size it need for int and pointer to a struct node
    if(n==NULL){  // Check error
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n; // update list value to point at n (list is a pointer)

    n = malloc(sizeof(node));
    if(n==NULL){
        free(list);  // free the list so the memory is not leak
        return 1;  // make sure to free any memory that have been allocated before
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if(n==NULL){
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    printf("%p", &list);

        // use for loop to wrap up code above in short
    //for(node *tmp=list; tmp!=NULL; tmp->next){   // use for loop to keep pointing to the first node in the list and keep update to the next field until the end (0x0)
       // printf("%i\n", number);
   // }

   // while(list != NULL){          // use tmp to look 1 step ahead to make sure you not free the memory too soon before lose access to
   //     node *tmp = list->next;
    //    free(list);
   //     list = tmp;
   // }
}