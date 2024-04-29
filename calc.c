#include <stdio.h>
#include <stdlib.h>


void main  () {
	int op, a ,b ,r;
	op = 1;
	
	while(op>=0) {
	
	printf("\n==Calculadora==\n");
	printf("Escolha uma das seguintes opcoes:\n");
	printf("1)Soma\n");
	printf("2)Subtracao\n");
	printf("3)Multiplicacao\n");
	printf("4)Divisao\n");
	printf("5)Sair\n");
	scanf("%d",&op);
	
	
	switch(op){
		case 1 :
			printf("Soma\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("A soma dos numeros:%d e %d resulta em: %d",a ,b, r=a+b);
			a=0;
			b=0;
			r=0;
		break;
		case 2 :
			printf("Subtracao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("A subtracao dos numeros:%d e %d resulta em: %d",a ,b, r=a-b);
			a=0;
			b=0;
			r=0;
		break;
		case 3 :
			printf("Multiplicacao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			printf("A multiplicacao dos numeros:%d e %d resulta em: %d",a ,b, r=a*b);
			a=0;
			b=0;
			r=0;
		break;
		case 4 :
			printf("Divisao\n");
			printf("Digite o primeiro numero:\n");
			scanf("%d",&a);
			printf("Digite o segundo numero:\n");
			scanf("%d",&b);
			
			while(b==0){
				printf("Impossivel dividir por 0\n");
				printf("Digite o outro numero:\n");
				scanf("%d",&b);
			}
				printf("A divisao dos numeros:%d e %d resulta em: %d",a ,b, r=a/b);
		break;
		case 5:
			printf("Opcao sair\n");
			op=-1;
			break;
		default:
			printf("Numero invalido");
		}
	}
}
