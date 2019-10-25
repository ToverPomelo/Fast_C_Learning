#include "queue.h"
#include <stdio.h>

int main(){
    QueueNode* queue = queueMake();
    for(int i=0;i<10;i++)
        queue = queuePush(queue,i);

    while(!queueIsEmpty(queue)){
        printf("%d ",queueFront(queue));
        queue = queuePop(queue);
    }
    printf("\n");

    queueDestory(queue);

    return 0;
}
