#include <stdio.h>

int main(){
    int numero, a, b;
	while(scanf("%d", &numero)){
        a = 2;
        b = 1;

        while(a != 1){
            if(a <= numero/2){
                a += a;
            }
            else{
                a -= (numero - a + 1);
            }
            b++;
        }
        printf("%d\n", b);
        break;
    }

    return 0;
}
