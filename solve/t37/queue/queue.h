/*
    Copyright (C) 2019.10.25, Tover.
    This is a simple queue demo to show how multi-file program in C.

    There is always some descriptions on the head of the .h file.
    So this is the description!
*/

/*
    This is the node structure of the linked list queue.
    And here is what the linked list like:
        (queue head) -> head -> ... -> tail -> (queue tail)
    Tail is a pointer pointing to the linked list tail node.
*/
typedef struct _queue_node{
    int data;
    struct _queue_node* next;
    struct _queue_node* tail; 
}_queue_node;
typedef _queue_node QueueNode;

/*
    Make an empty queue.
*/
extern _queue_node* queueMake();

/*
    Push data to the tail of the queue.
    Return the new queue with the new node.
*/
extern _queue_node* queuePush(_queue_node* head,int data);

/*
    Pop the front node in the queue.
    Return the new queue without the front node.
*/
extern _queue_node* queuePop(_queue_node* head);

/*
    Return the front value of the queue,
    but not pop. 
*/
extern int queueFront(_queue_node* head);

/*
    Judge if the queue is empty.
    0 -> is not empty
    1 -> is empty
*/
extern int queueIsEmpty(_queue_node* head);

/*
    Pop and free all the nodes in the queue
*/
extern void queueDestory(_queue_node* head);
