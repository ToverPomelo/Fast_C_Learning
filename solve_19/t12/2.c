#include <stdio.h>
#define N 1000

int notPrime[N] = {1,1,0};

void init(){
    for(int i=2;i<N;i++){
        if(!notPrime[i]){
            for(int j=i+i;j<N;j+=i){
                notPrime[j] = 1;
            }
        }
    } 
}

int isPrime(int n){
    return !notPrime[n];
}

int main(){
    init();

    printf("%d\n",isPrime(5));
    printf("%d\n",isPrime(25));

    return 0;
}
