#include "linkedList.h"
#include <stdio.h>

typedef node stackNode;

stackNode* stackInit() {
  return (stackNode*)listInit();
}

stackNode* stackPush(stackNode* stack, int data) {
  node* n = nodeCreate(data);
  return (stackNode*)listHeadInsert((node*)stack, n);
}

stackNode* stackPop(stackNode* stack) {
  return (stackNode*)listHeadDelete((node*)stack);
}

int stackIsEmpty(stackNode* stack) {
  return stack==NULL;
}

int stackTop(stackNode* stack) {
  if (stackIsEmpty(stack)) {
    printf("[Fault] Stack is empty!\n");
    exit(-1);
  }
  return stack->data;
}


int main() {
  stackNode* st = stackInit();
  st = stackPush(st, 1);
  st = stackPush(st, 2);
  st = stackPush(st, 3);
  st = stackPush(st, 4);
  st = stackPush(st, 5);

  while(!stackIsEmpty(st)) {
    printf("%d\n", stackTop(st));
    st = stackPop(st);
  }
}

