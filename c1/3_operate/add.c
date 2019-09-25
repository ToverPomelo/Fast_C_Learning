#include <stdio.h>

int main(){
    unsigned int a = 1;
    printf("a+1 => %u\n",a+1);
    printf("now a=%u\n",a);
    printf("\n");
    printf("a+=1 => %u\n",a+=1);
    printf("now a=%u\n",a);
    printf("\n");
    printf("a+=100 => %u\n",a+=100);
    printf("now a=%u\n",a);
    printf("\n");
    printf("a++ => %u\n",a++);
    printf("now a=%u\n",a);
    printf("\n");
    printf("++a => %u\n",++a);
    printf("now a=%u\n",a);
    printf("\n");
    printf("a%%50 => %u\n",a%50);  // use %% in printf
    printf("now a=%u\n",a);
    printf("\n");
    printf("a/=50 => %u\n",a/=50);
    printf("now a=%u\n",a);
    printf("\n");
    printf("a-=50 => %u\n",a-=50);
    printf("now a=%u\n",a);
    printf("Overflow!\n");

    return 0; 
}
