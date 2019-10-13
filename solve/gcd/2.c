#include <stdio.h>

unsigned int gcd(unsigned int a,unsigned int b){
    while(1){
        if(!b) return a;
        int tmp = b;
        b = a%b;
        a = tmp;
    }
}

int main(){
    printf("%u\n",gcd(5,7));
    printf("%u\n",gcd(5,10));

    return 0;
}
