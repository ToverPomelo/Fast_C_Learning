#include <stdio.h>

// assume arr not empty ...
int max(int* arr,int len){
    if(len==1) return arr[0];
    int tmp = max(arr,len-1);
    return tmp>arr[len-1] ? tmp : arr[len-1];
}

int main(){
    int array[5] = {12312,33,-123,34,0};
    printf("%d\n",max(array,5));

    return 0;
}
