#include "bst.h"
#include <stdio.h>

int main() {
  node* bst = bstInit();
  bst = bstInsert(bst, 4, 4);
  bst = bstInsert(bst, 2, 2);
  bst = bstInsert(bst, 6, 6);
  bst = bstInsert(bst, 1, 1);
  bst = bstInsert(bst, 3, 3);
  bst = bstInsert(bst, 5, 5);
  bst = bstInsert(bst, 7, 7);

  node* tmp = bstSearch(bst, 8);
  printf("Search for 8: %p\n", tmp);
  tmp = bstSearch(bst, 1);
  printf("Search for 1: %p\n", tmp);

  printTree(bst);
  bst = treeDestory(bst);

  return 0;
}
