#include <stdlib.h>

int main(){
    char* a = (char*)malloc(0x18);
    for(int i=0;i<0x18;i++)
        a[i] = 'a';
    char* b = (char*)malloc(0x18);
    for(int i=0;i<0x18;i++)
        b[i] = 'b';
    free(a);
    free(b);
    printf("b[20] == %c\n",b[20]);
    printf("b[5] == %c\n",b[5]);

    b[5] = 0;
    a = (char*)malloc(0x18);
    b = (char*)malloc(0x18);
    return 0;
}
