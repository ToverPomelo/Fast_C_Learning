#include <stdio.h>

int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(!(n%i)) return 0;
    } 
    return 1;
}

int main(){
    printf("%d\n",isPrime(5));
    printf("%d\n",isPrime(25));

    return 0;
}
