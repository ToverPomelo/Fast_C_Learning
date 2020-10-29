#include "linkedList.h"
#include <stdio.h>

typedef node queueNode;

typedef struct _queue {
  queueNode* head;
  queueNode* tail;
}queue;

queue* queueInit() {
  queue* q = (queue*)malloc(sizeof(queue));
  q->head = (queueNode*)listInit();
  q->tail = q->head;
  return q;
}

// push to tail
// pop in head
void queuePush(queue* q, int data) {
  node* qn = nodeCreate(data);
  if (!q->head) {
    q->head = q->tail = qn; 
    return;
  }
  qn->next = q->tail->next;
  q->tail->next = (queueNode*)qn;
  q->tail = (queueNode*)qn;
  return;
}

void queuePop(queue* q) {
  q->head = (queueNode*)listHeadDelete((node*)q->head);
  if (!q->head) {
    q->tail = q->head;
  }
  return;
}

int queueIsEmpty(queue* q) {
  return !q->head && !q->tail;
}

int queueFront(queue* q) {
  if (queueIsEmpty(q)) {
    printf("[Fault] Queue is empty! (in queueFront)\n");
    exit(-1);
  }
  return q->head->data; 
}

int queueBack(queue* q) {
  if (queueIsEmpty(q)) {
    printf("[Fault] Queue is empty! (in queueBack)\n");
    exit(-1);
  }
  return q->tail->data;
}

int main() {
  queue* q = queueInit();
  queuePush(q, 1);
  queuePush(q, 2);
  queuePush(q, 3);
  queuePush(q, 4);
  queuePush(q, 5);

  while (!queueIsEmpty(q)) {
    printf("%d, %d\n", queueFront(q), queueBack(q));
    queuePop(q);
  }

  return 0;
}



