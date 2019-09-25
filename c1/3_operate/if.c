#include <stdio.h>

int main(){
    
    for(int i=-2;i<3;i++){
        if(i)
            printf("%d is right!\n",i);
    }

    printf("\n");
    for(int i=-2;i<3;i++){
        if(i==0){
            printf("i is zero!\n");
        }
        else if(i==1){
            printf("i is one!\n");
        }else{
            printf("i is not zero or one!\n");
        }
    }

    printf("\n");
    char a = 10;
    // condition ? yes_do : no_do
    char* str = a>0 ? "a>0!\n" : "a<=0";
    printf("%s\n",str);
    return 0;
}
