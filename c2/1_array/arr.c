#include <stdio.h>

int main(){
    /* normal */
    int arr1[4] = {1,2,3,4}; 
    int arr2[4] = {5,6}; 
    int arr3[] = {7,8,9};

    for(int i=0;i<4;i++){ printf("%d ",arr1[i]); }
    printf("\n");
    for(int i=0;i<4;i++){ printf("%d ",arr2[i]); }
    printf("\n");
    for(int i=0;i<4;i++){ printf("%d ",arr3[i]); }  //overflow!
    printf("\n");
    printf("\n");

    int arr4[4][4] = {
        {1 ,2 ,3 ,4 },
        {5 ,6 ,7 ,8 },
        {9 ,10,11,12},
        {13,14,15,16}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",arr4[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<4*4;i++){ printf("%d ",arr4[0][i]); }
    printf("\n");
    printf("\n");

    /* pointer */
    printf("%lu\n",sizeof(arr1));
    printf("%p\n",arr1);
    printf("%p\n",arr1+1);
    printf("%p\n",arr1+2);  // address add sizeof(ptr_type)
    printf("\n");

    for(int i=0;i<4;i++){ printf("%d ",*(arr1+i)); }
    printf("\n");
    printf("\n");

    for(int i=0;i<4*4;i++){ printf("%d ",*(*arr4+i)); }
    printf("\n");

    return 0;
}
