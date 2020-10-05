#include <stdio.h>

int fac(int n){
    int result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int main(){
    printf("%d\n",fac(3));
    return 0;
}
