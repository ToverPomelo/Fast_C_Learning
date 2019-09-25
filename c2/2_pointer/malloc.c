#include <stdio.h>
#include <stdlib.h>  // malloc and free

int main(){
    // how to use
    int *p;
    printf("now p is: %p\n",p);
    // ptr = (ptr_type*) malloc(size)
    p = (int*)malloc(sizeof(int)*4);
    printf("now p is: %p\n",p);
    *p = 1;
    *(p+1) = 2;
    p[2] = 3;
    for(int i=0;i<4;i++){ printf("%d ",*(p+i)); }
    printf("\n");  //[3]->uninit

    printf("\n");
    free(p);
    printf("p is %p after free\n",p);
    printf("p[2] is: %d\n",p[2]);  // uaf!
    p = NULL;
    printf("now p is: %p\n",p);

    // different pointer to same value
    int a = 123;
    int* p1 = &a;
    int* p2 = &a;
    printf("now *p1 is: %d\n",*p1);
    *p2 = 321;
    printf("now *p1 is: %d\n",*p1);

    // pointer to pointer
    int** p3 = &p1;
    printf("\n");
    printf("value of a is:\t0x%lx\n",(unsigned long)a);
    printf("addr of a is:\t0x%lx\n",(unsigned long)&a);
    printf("value of p1 is:\t0x%lx\n",(unsigned long)p1);
    printf("addr of p1 is:\t0x%lx\n",(unsigned long)&p1);
    printf("value of p3 is:\t0x%lx\n",(unsigned long)p3);
    printf("addr of p3 is:\t0x%lx\n",(unsigned long)&p3);

    // matrix
    printf("\n");
    int** matrix = (int**)malloc(sizeof(int*)*4);  // malloc (continuous?)
    for(int i=0;i<4;i++){
        matrix[i] = (int*)malloc(sizeof(int)*4);
    }
    for(int i=0;i<4;i++){                          // init
        for(int j=0;j<4;j++){
            matrix[i][j] = 4*i+j;
        }
    }
    for(int i=0;i<4;i++){                          // print
        for(int j=0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<4;i++){                          // free
        free(matrix[i]);
    }
    free(matrix);
    
    // check
    printf("\n");
    int* p4 = malloc(1);
    free(p4);
    printf("now p4 is: %p\n",p4);
    p4 = malloc(10000000000000000); 
    if(p4){
        printf("succsee!\n");
        free(p4);
    }else{
        printf("failed!\n");
    }
    printf("now p4 is: %p\n",p4);

    // segmentation fault
    int* p5 = (int*)0x0;
    *p5 = 0;

    return 0;
}
