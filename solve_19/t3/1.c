#include <stdio.h>

void test255(){
    struct str_a {
        char c[255];
    };
    printf("Size :%lu\n",sizeof(struct str_a));
}

void test(){
    struct str_b {
        int a;   // aa aa aa aa
        char b;  // bb ?? ?? ??
        int c;   // cc cc cc cc
        char d;  // dd ?? ?? ??
    };
    printf("Size :%lu\n",sizeof(struct str_b));
}

int main(){
    test255();
    test();

    return 0;
}
