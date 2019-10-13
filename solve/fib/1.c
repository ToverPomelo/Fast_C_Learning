#include <stdio.h>

// start with 0 ...
unsigned int fib(unsigned int n){
    return n<=1 ? 1 : fib(n-1)+fib(n-2);
}

int main(){
    for(int i=0;i<10;i++)
        printf("%d ",fib(i));
    printf("\n");

    return 0;
}
