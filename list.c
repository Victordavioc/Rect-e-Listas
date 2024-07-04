#include "list.h"
#include <stdlib.h>

Node * node_new(){
    Node * no = calloc(1, sizeof(Node));
    
}
void node_free(Node * node){
    free(node);
}

void list_append(Node **root, Node * node){
    Node * tmp = *root;
    if( *root == NULL){
        *root = node;
    } else {
        while((*root)->next != NULL){
             tmp = tmp->next;
        }
        tmp->next = node;
    }
}