#include <stdio.h>
#include <stdlib.h>

struct _node {
  int data;
  struct _node* next;
};
typedef struct _node node;

node* listInit();
node* nodeCreate(int d);
node* listHeadInsert(node* head, node* n);
void listPrint(node* head);
int listSearchPos(node* head, int data);
node* listHeadDelete(node* head);
node* listDsetroy(node* head);
node* listTailInsert(node* head, node* n);
node* listTailDelete(node* head);
