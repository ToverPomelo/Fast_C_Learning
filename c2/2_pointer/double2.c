#include <stdio.h>
#include <stdlib.h>

long a = 33;
long test = 233;

int main(){
    printf("test == %ld\n",test);
    int* p1 = (int*)malloc(0x18);
    free(p1);
    free(p1);  // double free

    int* p2 = (int*)malloc(0x18);
    *p2 = 0x601048;
    int* p3 = (int*)malloc(0x18);
    int* p4 = (int*)malloc(0x18);
    *p4 = 0xdeadbeef;
    printf("test == %ld\n",test);

    return 0;
}

/* 纯秀操作。。。  */
/* on ubuntu 18.04 */
