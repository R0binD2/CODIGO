#include <stdio.h>
#include <stdlib.h>

float soma(float x, float y){

	float resultado=0;
	resultado = x + y;
	printf("%2.f\n", resultado);
	return resultado;

}

float subtracao(float x, float y){
	
	float sub=0;
	sub = x - y;
	printf("%2.f\n", sub);
	return sub;
}

float multi(float x, float y){

	float mult=0;
	mult = x * y;
	printf("%2.f\n", mult);
	return mult;

}

float divisaoA(float x, float y){

	float divisao=0;
	divisao = x / y;
	printf("%2.f\n", divisao);
	return divisao;
}

int main(){

	float a, b;
	int op;
	do{
	printf("\nDigite um numero:\n ");	
	scanf("%f", &a);
	printf("Digite outro numero:\n");	
	scanf("%f", &b);
	printf("Escolha sua operaçao abaixo:\n");
	printf("1 = soma\n2 = subtraçao\n3 = divisao\n4 = multiplicaçao\n0 (zero) para sair!\n");
	scanf("%i", &op);
	
	if (op == 1){printf("Sua soma e: \n");soma(a , b);}

	if (op == 2){printf("Sua subtraçao e: \n");subtracao(a , b);}
	
	if (op == 3){printf("Sua divisao e: \n");divisaoA(a , b);}

	if (op == 4){printf("Sua multplicaçao e: \n");multi(a , b);}
	}while(op != 0);
	
return 0;
}

