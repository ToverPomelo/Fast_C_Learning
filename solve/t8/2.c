#include <stdio.h>

// assume arr not empty ...
int max(int* arr,int len){
    int tmp = arr[0];
    for(int i=1;i<len;i++){
        if(tmp < arr[i]) tmp = arr[i];
    }
    return tmp;
}

int main(){
    int array[5] = {12312,33,-123,34,0};
    printf("%d\n",max(array,5));

    return 0;
}
