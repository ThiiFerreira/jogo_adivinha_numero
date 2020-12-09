#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Thiago da Silva Ferreira

int main(void) {
	int numerosecreto,chute,tentativas=0, dificuldade, ligar=1;
		
	do{	
		system("cls");
		
		srand(time(NULL));
		
		numerosecreto = rand()%51;
		
		//printf("%d\n\n", numerosecreto);
		
			
		printf("BEM VINDO AO JOGO DE ADIVINHACAO\n");
		
		//escolhendo o nivel do jogo
		printf("Selecione o nivel\n");
		
		printf("1- facil\n");
		printf("2- medio\n");
		printf("3- dificil\n");
		
		do {
		scanf("%d", &dificuldade);
		system("cls");
		//caso seja tal dificuldade sera tantas tentativas
			switch (dificuldade){
				case 1:
					tentativas=20;
					break;
				case 2:				
					tentativas=16;
					break;
				case 3:				
					tentativas=6;
					break;
				default:
					printf("Opcao invalida\nDigite novamente\n");
					tentativas=0;				
			} 		
		}	while (tentativas==0);
			
		//enquanto tentativas for >0 o jogo continuara
		int i=0;
		for ( i=tentativas; i>0; i--){
				
			printf("Voce tem %d tentativas\n", i);
			printf("Digite seu palpite entre 0 e 50\n");
			scanf("%d", &chute);
				
				//ser o chute for igual a secreto 
			if (chute==numerosecreto){
				printf("PARABENS VC ACERTOU O NUMERO SECRETO %d\n", numerosecreto);
				printf("Voce deseja jogar novamente?\n1-SIM\n2-NAO\n");
				scanf("%d", &ligar);
				system("cls");
				break;
				//caso nao tiver acertado o numero e tentativas nao for =0
			}else if (i>1) {	 
				 //se for maior o jogo da uma dica 
				if(chute>numerosecreto){
					system("cls");
					printf("\nERROUUUU\nTente novamente\n");
					printf("O seu chute %d foi maior que o numero secreto\n\n", chute);
				}				
					//se for menor o jogo da uma dica 
				else if(chute<numerosecreto){
					system("cls");
					printf("\nERROUUUU\nTente novamente\n");
					printf("O seu chute %d foi menor que o numero secreto\n\n", chute);					
				}
			}					
		} 
			//se tentativas for =0 o jogo acaba
		if (i==0){
			printf("GAME OVER\nO numero secreto e %d\n\n", numerosecreto);
			//sistema que liga e desliga com o do while se for 1 roda tudo denov se for 2 passa pra proxima linha e o jogo acaba
			printf("Voce deseja jogar novamente?\n1-SIM\n2-NAO\n");
			scanf("%d", &ligar);		
		} 
	}while(ligar==1);
					printf("Obrigado por jogar, ATE BREVE ");
		system("pause");
	
	return 0;
}
