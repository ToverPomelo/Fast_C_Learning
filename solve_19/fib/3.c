#include <stdio.h>

int buffer[100] = {1,1};
int count = 1;

// start with 0 ...
unsigned int fib(unsigned int n){
    if(n>count){
        for(int i=count+1;i<=n;i++){
            buffer[i] = buffer[i-1]+buffer[i-2];
        }
        count = n;
    }
    return buffer[n];
}

int main(){
    for(int i=0;i<10;i++)
        printf("%d ",fib(i));
    printf("\n");

    return 0;
}
