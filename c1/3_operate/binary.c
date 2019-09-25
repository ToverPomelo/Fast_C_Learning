#include <stdio.h>
#define SIZE sizeof(char)*8

char buffer[SIZE] = {0};
// just print binary
void printBit(size_t n){
    int count = 0;
    for(int i=0;i<SIZE;i++) buffer[i] = '0';
    while(n){
        if(n&1)
            buffer[count] = '1';
        else
            buffer[count] = '0';
        n >>= 1;
        count++;
    }
    printf("0b");
    for(int i=SIZE-1;i>=0;i--){
        printf("%c",buffer[i]);
    }
    //printf("\n");
}

int main(){
    // left shift
    printf("Left shift demo:\n");
    char t = 0b00001111;
    for(int i=0;i<10;i++){
        printf("%d\t->\t",t);
        printBit(t);
        printf("\n");
        t <<= 1;
    }

    // right shift
    printf("\nRight shift demo:\n");
    t = 0b01000000;
    for(int i=0;i<10;i++){
        printf("%d\t->\t",t);
        printBit(t);
        printf("\n");
        t >>= 1;
    }

    // and or xor not
    t = 0b11110000;
    printf("\nand demo:\n  ");
    printBit(t);
    printf("\n& 0b11001100\n---------------\n= ");
    printBit(t&0b11001100);
    printf("\n");
    
    t = 0b11110000;
    printf("\nor demo:\n  ");
    printBit(t);
    printf("\n| 0b11001100\n---------------\n= ");
    printBit(t|0b11001100);
    printf("\n");

    t = 0b11110000;
    printf("\nxor demo:\n  ");
    printBit(t);
    printf("\n^ 0b11001100\n---------------\n= ");
    printBit(t^0b11001100);
    printf("\n");

    t = 0b11110000;
    printf("\nnot demo:\n! ");
    printBit(t);
    printf("\n---------------\n= ");
    printBit(!t);
    printf("\n");

    // tricks
    printf("\ntrick1:\n");
    t = 3;
    if((t&1)==0)  // priority!
        printf("3 is even!\n");
    else
        printf("3 is odd!\n");

    printf("\ntrick2:\n");
    t = 0;
    if(!t)
        printf("t is zero!\n");
    else
        printf("t is not zero!\n");

    printf("\nencrypt:\n");
    t = 'a';
    printf("t: %c\n",t);
    char key = '?';
    printf("key: %c\n",key);
    t ^= key;
    printf("encrypted: %c\n",t);
    t ^= key;
    printf("decrypted: %c\n",t);

    return 0;
}
