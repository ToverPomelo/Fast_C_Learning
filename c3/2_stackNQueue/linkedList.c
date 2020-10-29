#include "linkedList.h"

node* listInit() {
  return NULL;
}

node* nodeCreate(int d) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->data = d;
  return newNode;
}

node* listHeadInsert(node* head, node* n) {
  n->next = head;
  return n;
}

void listPrint(node* head) {
  if (!head) {
    printf("[Empty]\n");
    return;
  }
  for (node* i=head; i; i=i->next) {
    printf("%d ",i->data);
  }
  printf("\n");
}

int listSearchPos(node* head, int data) {
  int pos = 0;
  for (node* i=head; i; i=i->next,pos++) {
    if (i->data == data) 
      return pos;
  }
  return -1;
}

node* listHeadDelete(node* head) {
  if (head) {
    node* tmp = head->next;
    free(head);
    return tmp;
  }
  return head;
}

node* listDsetroy(node* head) {
  while (head) {
    head = listHeadDelete(head);
  }
  return head;
}

node* listTailInsert(node* head, node* n) {
  if (!head) {
    return n;
  }
  node* tmp = head;
  while (tmp->next) {
    tmp = tmp->next;
  } 
  n->next = tmp->next;
  tmp->next = n;
  return head;
}

node* listTailDelete(node* head) {
  if (!head) {
    return head;
  }

  node* j = head;
  node* i = j;
  if (!head->next) {
    i = j->next;
    free(j);
    return i;
  }

  while (j->next) {
    i = j;
    j = j->next;
  }
  i->next = j->next;
  free(j);
  return head;
}
