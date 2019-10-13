#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node* create(){
    return NULL;
}

void print(Node* list){
    for(Node* i=list;i;i=i->next){
        printf("%d ",i->data);
    }
    printf("\n");
}

Node* insert(Node* list,int value,int pos){  // as array... after insert
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = value;
    if(!list) return newnode;
    if(pos<=0){
        newnode->next = list;
        return newnode;
    }

    Node* p;
    int i=0;
    for(p=list ; p->next&&i<pos ; i++,p=p->next);
    Node* q = p->next;
    newnode->next = q;
    p->next = newnode;

    return list;
}

Node* delete(Node* list,int pos){
    if(!list) return list;
    if(pos<=0){
        Node* q = list;
        list = list->next;
        free(q);
    }

    Node* p;
    int i = 1;
    for(p=list ; p->next&&i<pos ; i++,p=p->next);
    if(i==pos){
        Node* q = p->next;
        p->next = q->next;
        free(q);
    }
    return list;
}

int main(){
    Node* head = create();
    head = insert(head,1,0);    // -> 1
    print(head);
    head = insert(head,2,100);  // -> 1 2
    print(head);
    head = insert(head,3,0);    // -> 3 1 2
    print(head);
    head = insert(head,4,1);    // -> 3 1 4 2

    head = delete(head,2);      // -> 3 1 2
    print(head);
    head = delete(head,100);    // -> 3 1 2
    print(head);
    head = delete(head,0);      // -> 1 2
    print(head);

    return 0;
}
