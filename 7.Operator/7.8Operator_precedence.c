#include<stdio.h>
int main(){
    printf(" Postfix :  (), [], -> ,., ++, - -  \n");
    printf(" Unary   :  +,-,!,~,++,--,(type),*,&,size_of\n"); // right to left
    printf(" Multiplicative: *,/,%\n");
    printf(" Additive : +,-\n");
    printf(" Shift : <<,>>\n");
    printf(" Relational: <,<=,>,>=\n");
    printf(" Equality : ==,!=\n");
    printf(" Bitwise    :&,|,^,~\n"); // no priority
    printf(" logical : &&,||,!\n");  //no priority
    printf(" Condition: ?,:\n");   // R to L
    printf(" Assignment: =,+=,-=,*=,/=,%=,>>=,<<=,&=,^=,|=\n"); //R TO L
    printf(" Comma: ,\n"); // L to R
}
