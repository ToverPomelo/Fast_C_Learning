#include <stdio.h>

int buffer[100] = {1};
int count = 1;

// n should less than 100 ...
int fac(int n){
    if(n>count){
        for(int i=count;i<n;i++){
            buffer[i] = (i+1)*buffer[i-1];
        }
        count = n;
    }
    return buffer[n-1];
}

int main(){
    printf("%d\n",fac(3));
    printf("%d\n",fac(6));
    return 0;
}
