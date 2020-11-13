#ifndef __BT
#define __BT

typedef struct node {
  long id;
  int num;
  struct node* left;
  struct node* right;
}node;

node* bstInit();  // create a NULL tree
node* createNode(long id, int num);  // create tree node
node* bstInsert(node* root, long id, int num);  // insert
node* bstSearch(node* root, long id);  // return node with specific id
int bstDelete(node* root, long id);  // delete

node* treeDestory(node* root);  // destory
void printTree(node* root); // VLR

#endif
