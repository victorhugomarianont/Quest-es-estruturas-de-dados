# Quest-es-estruturas-de-dados
repositorio para armazenamento das questões do TDE  3 
/*DARLAN MOURA*/
URI ONLINE  
1259 - Pares e Ímpares
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int crescente(int *vet, int *vet2){
	return (*(int*)vet2 - *(int*)vet );
	}
    char c;
	int num1, num2, numero, numero2, i, k = 0, j = 0;
	scanf("%d %d", &num1, &num2);
	numero = num1 * num2;
    int vet[numero], vet2[numero];
    for (i = 0; i < numero; ++i){
      	scanf("%d%c", &numero2, &c);
		if (c == 'V')
			vet[j++] = (numero2 * 100) + c;
		else
			vet2[k++] = (numero2 * 100) + c;
	}
    qsort(vet, j, sizeof(int), crescente);
	qsort(vet2, k, sizeof(int), crescente);
    for (i = 0; i < j; ++i)
		printf("%d%c\n", vet[i] / 100, (char)(vet[i] % 100));
    for (i = 0; i < k; ++i)
		printf("%d%c\n", vet2[i] / 100, (char)(vet2[i] % 100));
	return 0;
}
