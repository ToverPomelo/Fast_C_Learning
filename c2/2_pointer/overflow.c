#include <stdlib.h>
#include <stdio.h>

int main(){
    char* p1 = (char*)malloc(0x18);
    char* p2 = (char*)malloc(0x48);
    for(int i=0;i<0x18;i++){
        p1[i] = 'a';
    }
    printf("%s\n",p1);
    p1[0x19] = 0xff;  // overflow!
    free(p2);
}
