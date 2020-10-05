#include <stdio.h>

void fun1(){
    printf("I am fun1!\n");
    return;
}

void fun2(int par){
    printf("parameter is: %d\n",par);
    return;
}

int fun3(int a){
    return a^233;
}

char* fun4();

void fun5(int aa){
    aa += 10000; 
}

int main(){
    fun1();
    fun2(233);
    printf("fun3 return: %d\n",fun3(3));
    printf("fun4 return: %s\n",fun4());
    int a = 1;
    fun5(a);
    printf("a still equals %d\n",a);
    return 0;
}

char* fun4(){
    char* c = "hello?\n";
    return c;
}
