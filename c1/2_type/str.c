#include <stdio.h>

int main(){
    char *str1 = "Hello world!";
    printf("%s\n",str1);
    char *str2 = "Hello "            
                 "world!";
    printf("%s\n",str2);
    char str3[] = "Hello world!";
    printf("%s\n",str3);
    char str4[] = {'H','e','l','l','o',' ','W','o','r','l','d','!','\n','\0'};
    printf("%s\n",str4);
    printf("%lu\n",sizeof(str1));
    printf("%lu\n",sizeof(str2));
    printf("%lu\n",sizeof(str3));
    printf("%lu\n",sizeof(str4));
    printf("\n");

    // \0
    printf("first of str3: %d (%c)\n",str3[0],str3[0]);
    printf("10th of str3: %d (%c)\n",str3[9],str3[9]);
    printf("end of str3: %d\n",str3[12]);
    printf("\n");

    char* str5 = "Hello\0World!\n";
    printf("%s\n",str5);

    return 0;
}
