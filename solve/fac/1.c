#include <stdio.h>

int fac(int n){
    return n ? n*fac(n-1) : 1;
}

int main(){
    printf("%d\n",fac(3));
    return 0;
}
