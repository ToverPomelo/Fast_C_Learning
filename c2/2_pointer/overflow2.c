#include <stdlib.h>
#include <stdio.h>

long a = 72;
int test = 233;
int main(){
    printf("test -> %d\n",test);
    char* p1 = (char*)malloc(0x18);
    char* p2 = (char*)malloc(0x48);
    for(int i=0;i<0x18;i++){
        p1[i] = 'a';
    }

    // hack
    free(p2);
    p1[0x20] = '\x38';  // overflow!
    p1[0x21] = '\x10';  // too
    p1[0x22] = '\x60';  // too
    p2 = (char*)malloc(0x48);
    int* p3 = (int*)malloc(0x48);
    p3[4] = 123;
    printf("test -> %d\n",test);

}
