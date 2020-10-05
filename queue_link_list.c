#include<stdio.h>
#include<stdlib.h>

//global variables
struct Node * f = NULL;
struct Node * r = NULL;

struct Node{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}

void enQueue(int val){
    struct Node* n = (struct Node *) malloc(sizeof(struct Node));
    if(n == NULL)
        printf("Queue is full!\n");
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){ //-special check
            f = r = n;
        }
        else{
            r->next = n; 
            r = n; 
        }
    }
}

int deQueue(){
    int val = -1; 
    struct Node * ptr = f;
    if(f == NULL)
        printf("Queue Empty\n");
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}


int main(){
    linkedlistTraversal(f);
    printf("Removing element %d\n",deQueue());
    enQueue(34);
    enQueue(64);
    enQueue(75);
    linkedlistTraversal(f);
    printf("Removing element %d\n",deQueue());
    return 0;
}
