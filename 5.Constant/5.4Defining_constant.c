#include<stdio.h>

#define Length 5 //#define preprocessor to define a constant as #define identifier value
#define Width 5
#define Newline '\n'
int main(){
    int area;

    area=Length * Width;
    printf(" Area is :%d",area);
    printf(" %c",Newline);


    return 0;

}
