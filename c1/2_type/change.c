#include <stdio.h>

int main(){
    char a = 'a';
    char A = 65;
    printf("As char:\n\ta=%c\n\tA=%c\n",a,A);
    printf("As num(ASCII):\n\ta=%d\n\tA=%d\n",a,A);

    printf("\n");
    int b = (int)a;
    printf("b=%d\nsize:%ld\n",b,sizeof(b));
    printf("\n");
    long c = (long)b;
    printf("c=%ld\nsize:%ld\n",c,sizeof(c));

    printf("\n");
    long d = 0x7fffffffffffffff;
    printf("d=%ld\nsize:%ld\n",d,sizeof(d));
    printf("\n");
    int e = (int)d;  //0xffffffff (cut)
    printf("e=%d\nsize:%ld\n",e,sizeof(e));
    printf("e2=%u\nsize:%ld\n",e,sizeof(e));

    // pointer
    printf("\n");
    unsigned long p = (unsigned long)(&a);
    printf("p=%lu\nsize:%ld\n",p,sizeof(p));
    printf("Address of a is: %p\n",&a);
    printf("p is:\t\t 0x%lx\n",p);
    
    // double
    printf("\n");
    double db = 3.1415926;
    printf("db = %f\n",db);
    unsigned long udb = *(unsigned long*)&db;
    printf("db in mem is:\t\t 0x%lx\n",udb);


    return 0;
}
