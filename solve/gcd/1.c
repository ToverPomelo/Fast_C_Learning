#include <stdio.h>

unsigned int gcd(unsigned int a,unsigned int b){
    if(!b) return a;
    return gcd(b,a%b);
}

int main(){
    printf("%u\n",gcd(5,7));
    printf("%u\n",gcd(5,10));


    return 0;
}
