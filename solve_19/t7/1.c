#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 32
#define ROUND 5

char buffer[MAX_NUM] = {0};
int right = -1;
void initPro(){
	int i; 
    for(i=0;i<MAX_NUM;i++){
        buffer[i] = '-';
    }
    srand(time(0));
    right = rand()%MAX_NUM;
}

int exp2N(int n){
    int res = 1;
    int i;
    for(i=0;i<n;i++)
        res *= 2;
    return res;
}

void printBuf(){
	int i;
    for(i=0;i<MAX_NUM;i++){
        printf("%c",buffer[i]);
    }
    printf("\n");
}

int Guess(int guess){
	printf("%d\n",guess);
    if(guess<0 || guess>MAX_NUM || buffer[guess]!='-'){
        printf("ARE YOU KIDDING ME?\n");
        exit(0);
    }
    if(guess == right){
        buffer[guess] = 'o';
        return 0;
    }
    buffer[guess] = 'x';
    if(guess > right)
        return -1;
    return 1;
}

int main(){
    int win = 0;
    int k;
    for(k=0;k<ROUND;k++){
    	int left=0,right=MAX_NUM-1;
    	int guess=(left+right)/2;                 // <-
        initPro();
        win = 0;
        int i;
        for(i=0;exp2N(i)<MAX_NUM+1;i++){
            if(MAX_NUM <= 128)
                printBuf();
            printf("Your guess: ");
            int result = Guess(guess);
            if(!result){
                if(MAX_NUM <= 128)
                    printBuf();
                printf("right!\n");
                win = 1;
                break;
            }else{
                if(result == -1){
                    printf("smaller!\n");
                    right = guess;                // <-
                }else{
                    printf("bigger!\n");
                    left = guess;                 // <-
                }
                guess=(left+right)/2;             // <-
                printf("test -> %d\n",guess);     // <-
            }
        }
        if(!win){
            printf("You lose!\n");
            return 0;
        }
    }
    printf("\n");
    printf("------------------------\n");
    printf("----    Your win!   ----\n");
    printf("------------------------\n");

    return 0;
}
