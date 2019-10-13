#include <stdio.h>

int test1(int inp){
        int arr[1] = {0};
        *arr = 0xdeadbeef;
        return inp == arr[0];  // arr[0] == *arr == 0xdeadbeef == 3735928559
}

int test2(int inp1,int inp2){
        int arr[2] = {0};
        *(arr+inp1) = 0xdeadbeef;
        return inp2 == arr[1];  // arr[1] == *(arr+1) == 0xdeadbeef == 3735928559
}

int test3(char inp){  // hint: google little-endian
    char arr[4] = {0};
    *(int*)(arr) = 0xdeadbeef;  // ef be ad de
    return inp == arr[3];       // 0  1  2  3  (0xde == 222)
}

int main(){
        int inp1,inp2;
        scanf("%d",&inp1);
        if(test1(inp1)){
            scanf("%d %d",&inp1,&inp2);
            if(test2(inp1,inp2)){
                scanf("%d",&inp1);
                if(test3(inp1)){
                    printf("You got it!\n");
                    return 0;
                }
            }
        }
        printf("You failed!\n");
        return 0;
}

/*
 * 3735928559
 * 1 3735928559
 * 222
 * You got it!
 * */
