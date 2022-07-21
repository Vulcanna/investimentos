#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 void main(){
	float taxa;
	setlocale(LC_ALL,"portuguese");
	printf("\nDigite a taxa de juros do investimento:");
	scanf("%f",&taxa);
	if(taxa>0.97)
    	printf("considere o investimento!");
	else
	  printf("Não é um bom investimento!\n\n");
	  system("pause");
}
