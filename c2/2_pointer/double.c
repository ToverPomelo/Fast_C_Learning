#include <stdlib.h>

int main(){
    int* a = (int*)malloc(0x18);
    for(int i=0;i<9;i++){  // tcachebins(7) on glibc-2.27
        free(a);
    }

    return 0;
}
