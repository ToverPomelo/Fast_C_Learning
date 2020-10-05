#include <stdio.h>

int main(){
    printf("size of char is:\t\t%ld byte\n",sizeof(char));
    printf("size of int is:\t\t\t%ld bytes\n",sizeof(int));
    printf("size of unsigned int is:\t%ld bytes\n",sizeof(unsigned int));
    printf("size of long is:\t\t%ld bytes\n",sizeof(long));
    printf("size of unsigned long is:\t%ld bytes\n",sizeof(unsigned long));
    printf("size of float is:\t\t%ld bytes\n",sizeof(float));
    printf("size of double is:\t\t%ld bytes\n",sizeof(double));
    printf("\n");
    printf("size of char pointer is:\t%ld bytes\n",sizeof(char*));  // pointer is same as unsigned long !
    printf("size of int pointer is:\t\t%ld bytes\n",sizeof(int*));
    return 0;
}

/*
    struct ?
    Task3 !
*/
