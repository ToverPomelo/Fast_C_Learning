#include <stdio.h>
#include <stdlib.h>

void add(int* a){
    a += 100;
}

void exchange(int* a,int* b);
// Task1 !

void printArray(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    } 
    printf("\n");
}

int* newArray_wrong(int len){
    int arr[len]; 
    for(int i=0;i<len;i++){
        arr[i] = i+1;
    }
    return arr;
}

int* newArray(int len){   // c2 再讲
    int* arr = (int*)malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        arr[i] = i+1;
    }
    return arr;
}

int* ret2(int a){
    int* arr = (int*)malloc(sizeof(int)*2);
    arr[0] = a+a;
    arr[1] = a*a;
    return arr;
}

int* retStack(){
    int a = 100;
    int* ptr_a = &a;
    return ptr_a;
}

void test(){
    int a[4] = {0,0,0,233};
    return;
}


int main(){
    int a = 1;
    add(&a);
    printf("a = %d\n",a);
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(b,10);
    printf("wrong example:\n");
    int* c = newArray_wrong(10);
    printf("c = %lu\n",(unsigned long)c);  // 函数返回local variable数组时会被置0?
    //printArray(c,10);                    // segmentation fault
    printf("correct example:\n");
    int* d = newArray(10);
    printArray(d,10);
    free(d);
    int* e = ret2(10);
    printf("10+10 = %d\n10*10 = %d\n",e[0],e[1]);
    free(e);
    
    printf("\n");
    int *p = retStack();
    printf("retStack return: %d\n",*p);
    test();
    printf("retStack return: %d ???\n",*p);
    
    return 0;
}
