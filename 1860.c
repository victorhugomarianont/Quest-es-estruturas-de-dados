#include <stdio.h>
#include <stdlib.h>


void main(){
    int open, close;
    char expression[1001],*p;

    while(scanf("%s",expression)!=EOF){

        close=open=0;

        p = &expression[0];
        while(*p != '\0'){

            if(*p == '(' ){
                open++;

            }
            if(*p == ')' && open){
                open--;

            }else if(*p == ')' && !open){
				close++;

			}
            p++;
        }
        if( !open && !close ){
            puts("correct");
        }
        else{
            puts("incorrect");
        }

    }

}
