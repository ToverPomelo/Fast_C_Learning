#include <stdio.h>

void helo(int i){
    if(!i) return;
    helo(i-1);
    printf("Hello world! x %d\n",i);
}

int main(){
    helo(5);
    return 0;
}
