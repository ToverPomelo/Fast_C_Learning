#include <stdio.h>

void loop(int n){
    if(!n)
        return;
    printf("looping! -> %d\n",n);
    loop(n-1);
}

int main(){
    int i = 0;
    while(i<2){
        printf("i = %d\n",i);
        i++;
    }
    printf("end while!\n\n");
    i = 0;
    do{
        printf("i = %d\n",i);
        i++;
    }while(0);
    printf("end do while!\n\n");
    for(int i=0;i<2;i++){
        printf("i = %d\n",i);
    }
    printf("end for!\n\n");
    i = 0;
    for(i=0;i<2;i++);
    printf("i = %d\n",i);
    printf("end test!\n\n");

    loop(3);
    printf("end recursion!\n\n");

    // continue and break
    for(int i=0;i<10;i++){
        if(i<8) continue;
        if(i==9) break;
        printf("%d\n",i);
    }

    // 骚操作(写宏的时候用) (了解下就好了)
    // https://www.cnblogs.com/lanxuezaipiao/p/3535626.html
    do{
       //... ... 
    }while(0);

    // 不要学的骚操作...
    for(int i=0 ; i<10 ; (i&1)&&printf("%d id odd!\n",i),i++);
    return 0;
}
