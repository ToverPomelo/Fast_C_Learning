#include <stdio.h>
#include <limits.h>

int main(){
    printf("Max of char is:\t%d\n",CHAR_MAX);
    printf("Min of char is:\t%d\n",CHAR_MIN);
    printf("\n");
    printf("Max of int is:\t%d\n",INT_MAX);
    printf("Min of int is:\t%d\n",INT_MIN);
    printf("\n");
    printf("Max of unsigned int is:\t%d (wrong!)\n",UINT_MAX);  // %d->signed int | %u->unsigned int
    printf("Max of unsigned int is:\t%u\n",UINT_MAX);           // 0xffffffff
    printf("Min of unsigned int is:\t%u\n",0);
    printf("\n");
    printf("Max of long is:\t%ld\n",LONG_MAX);
    printf("Min of long is:\t%ld\n",LONG_MIN);
    printf("... ...\n");

    return 0;
}
