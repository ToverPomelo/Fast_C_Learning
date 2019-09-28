#include <stdio.h>

void hello(){
    printf("Hello world!\n");
}

int helloN(int n){
    for(int i=0;i<n;i++)
        printf("Hello world! x %d\n",i);
    return n;
}

// 秀操作。。。
char* helo = "\xeb\x1b\xb8\x04\x00\x00\x00\xbb"
             "\x01\x00\x00\x00\x59\xba\x08\x00"
             "\x00\x00\xcd\x80\x31\xdb\xb8\x01"
             "\x00\x00\x00\xcd\x80\xe8\xe0\xff"
             "\xff\xff\x48\x61\x63\x6b\x65\x64"
             "\x21\x0a\x00";

int main(){
    printf("Address of function hello: %p\n",hello);
    printf("Address of function hello: %p\n",&hello);  // same? strange
    printf("\n");

    // type (*your_name)(args) = function_addr
    void (*my_halo)() = hello;  // or &hello
    my_halo();
    printf("\n");

    int (*my_haloN)(int) = &helloN;
    my_haloN(2);

    void (*hack)() =  (void (*)())helo;
    hack();

    return 0;
}
