#include <stdio.h>

int a0(){
    printf("a0! -> ");
    return 0;
}

int a1(){
    printf("a1! -> ");
    return 1;
}

int test(){
    printf("test!");
    return -1;
}

int main(){
    if(a1() && test()) printf(" right!");    
    printf("  (1&&*)\n");
    if(a0() && test()) printf(" right!");    
    printf("              (0&&*)\n");
    if(a1() || test()) printf("      right!");    
    printf("  (1||*)\n");
    if(a0() || test()) printf(" right!");    
    printf("  (0||*)\n");

    return 0;
}
