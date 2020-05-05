# Quest-es-estruturas-de-dados
repositorio para armazenamento das questões do TDE  3 
/*DARLAN MOURA*/
URI ONLINE  
1259 - Pares e Ímpares
#include <stdio.h>
#include <stdlib.h>
int main(){
	int c_par(void const *par, void const *impar ){
    return (*(int*)par - *(int*)impar );}
    int c_impar(void const *par, void const *impar ){
    return (*(int*)impar - *(int*)par );}
    int numero, i, num, cont_par = 0, cont_impar = 0;
    scanf("%d", &numero);
    int par[numero], impar[numero];
    for(i = 0; i < numero; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            par[cont_par] = num;
            cont_par++;
        }else{
            impar[cont_impar] = num;
            cont_impar++;
        }
    }
    qsort(par, cont_par, sizeof(int), c_par);
    qsort(impar, cont_impar, sizeof(int), c_impar);
    for(i = 0; i < cont_par; i++){
        printf("%d\n",par[i]);
    }
    for(i = 0; i < cont_impar; i++){
        printf("%d\n",impar[i]);
    }
    
    return 0;
}
