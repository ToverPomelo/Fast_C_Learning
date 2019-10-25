/*
    Copyright (C) 2019.10.25, Tover.
    This is a simple queue demo to show how multi-file program in C.

    There is always some descriptions on the head of the .h file.
    So this is the description!
*/

#ifndef __QUEUE__
#include "queue.h"
#include <stdlib.h>
#define __QUEUE__
#endif

/*
    Make an empty queue.
*/
_queue_node* queueMake(){
    return NULL;
}

/*
    Push data to the tail of the queue.
    Return the new queue with the new node.
*/
_queue_node* queuePush(_queue_node* head,int data){
    _queue_node* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    if(queueIsEmpty(head)){
        newNode->tail = newNode;
        return newNode;
    }
    _queue_node* tail = head->tail;
    head->tail = newNode;
    tail->next = newNode;
    return head;
}

/*
    Pop the front node in the queue.
    Return the new queue without the front node.
*/
_queue_node* queuePop(_queue_node* head){
    if(queueIsEmpty(head)) return NULL;
    if(queueIsEmpty(head->next)){
        free(head);
        return NULL;
    }
    _queue_node* oldHead = head;
    head = head->next;
    head->tail = oldHead->tail;
    free(oldHead);
    return head;
}

/*
    Return the front value of the queue,
    but not pop.
*/
int queueFront(_queue_node* head){
    return head->data;
}

/*
    Judge if the queue is empty.
    0 -> is not empty
    1 -> is empty
*/
int queueIsEmpty(_queue_node* head){
    return head==NULL;
}

/*
    Pop and free all the nodes in the queue
*/

void queueDestory(_queue_node* head){
    while(!queueIsEmpty(head)) 
        queuePop(head);
}
