#include <stdio.h>
#define MAXSIZE 5

void stackDemo() {
  printf("Stack:\n");
  int stack[MAXSIZE] = {0};
  int top = -1;

  // push
  stack[++top] = 1;
  stack[++top] = 2;
  stack[++top] = 3;
  stack[++top] = 4;
  stack[++top] = 5;

  // top and pop
  while (top>-1) {
    printf("%d\n", stack[top--]);
  }
  printf("\n");
}

void queueDemo() {
  printf("Queue:\n");
  int queue[MAXSIZE] = {0};
  int front = 0;  // empty: front==back
  int back = 0;

  // push
  queue[back++ % MAXSIZE] = 1;
  queue[back++ % MAXSIZE] = 2;
  queue[back++ % MAXSIZE] = 3;
  queue[back++ % MAXSIZE] = 4;
  if ((back+1)%MAXSIZE == front%MAXSIZE) {
    printf("Queue is full\n");
  }

  // pop
  while (!(front==back)) {
    printf("%d\n", queue[front++ % MAXSIZE]);
  }
  printf("\n");
}

int main() {
  stackDemo();
  queueDemo();
  return 0;
}
