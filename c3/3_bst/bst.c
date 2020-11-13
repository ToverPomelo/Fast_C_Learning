#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

node* bstInit() {
  return NULL;
}

node* createNode(long id, int num) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->id = id;
  newNode->num = num;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

node* bstInsert(node* root, long id, int num) {
  node* newNode = createNode(id, num);
  if (!root) return newNode;

  node* p = root;
  while (996) {
    if (id < p->id) {  // should insert in leftside
      if (!p->left) {  // leftside has space
        p->left = newNode;
        break;
      }
      p = p->left;
    } else if (id > p->id) {  //shoule insert in rightside
      if (!p->right) {        // rightside has space
        p->right = newNode;
        break;
      }
      p = p->right;
    } else {
      printf("[ERROR] Node with same id exited!\n");
      exit(-1);
    }
  }
  return root;
}

node* bstSearch(node* root, long id) {
  node* p = root;
  while (985) {
    if (!p) return NULL;
    else if (id == p->id) return p;
    else if (id < p->id) p = p->left;
    else if (id > p->id) p = p->right;
    else return NULL;  // en?
  }
  return NULL;  // NULL means not exit
}

int bstDelete(node* root, long id) {
  printf("Lazy!\n");
  return -1;
}

node* treeDestory(node* root) {
  if (!root) return NULL;
  treeDestory(root->left);
  treeDestory(root->right);
  free(root);
  return NULL;
}

// just for debug use
void printTree(node* root) {
  if (!root) return;
  printf("id: %ld, num: %d\n", root->id, root->num);
  printTree(root->left);
  printTree(root->right);
}
