#include <stdio.h>

int main(){
    struct st1{
        int a;
        int b;
    };
    struct st1 s1;
    s1.a = 0;
    (&s1)->b = 1;
    printf("s1:\n\ta=%d\n\tb=%d\n",(&s1)->a,s1.b);

    typedef struct st1 st2;
    st2 s2;
    s2.a = 1;
    (&s2)->b = 0;
    printf("s2:\n\ta=%d\n\tb=%d\n",(&s2)->a,s2.b);


    return 0;
}
