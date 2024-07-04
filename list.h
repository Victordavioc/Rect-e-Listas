
#include <stdio.h>


typedef struct _node{
    void * data;
    struct _node * next;
} Node;

Node * node_new();
void node_free(Node * node);
void list_append(Node ** list, Node * node);
void list_remove(Node * List, int *node);
void list_free(Node * list);

