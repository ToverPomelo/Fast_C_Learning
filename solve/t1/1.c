#include <stdio.h>

void exchange(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp; 
}

int main(){
    int arr[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){   // change <= to < (overflow)
        for(int j=i;j<5;j++){
            if(arr[j] > arr[i]){
                exchange(&arr[i],&arr[j]);
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
