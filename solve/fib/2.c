#include <stdio.h>

// start with 0 ...
unsigned int fib(unsigned int n){
    if(n <= 1) return 1;
    int last=1,next=1;
    int i;
    for(i=2;i<n;i++){
        int tmp = next;
        next = last+next;
        last = tmp;
    }
    return last+next;
}

int main(){
    for(int i=0;i<10;i++)
        printf("%d ",fib(i));
    printf("\n");

    return 0;
}
