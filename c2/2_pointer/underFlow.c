#include <stdio.h>

int a = 233;
int b[3] = {0,1,2};

int main(){
    printf("b[-2] == %d\n",b[-2]);
    printf("a == %d\n",a);
    printf("address of a == %p\n",&a);
    *(int*)0x601030 = 123;
    printf("a == %d\n",a);

    return 0;
}
