#include<stdio.h>
int main(){
    char str1[]="This is a string tutorial in c";
    char str2[]="And you are most welcome.";

    strcpy(str1,str2); // source is str2 and destination is str1  like str1=str2
    printf("String 1 :%s\n",str1);


    return 0;

}
