#include <stdio.h>
#include <locale.h>

void iniciar(int mtz[3][5], int i, int j){
	printf("   1  2  3  4  5\n");
	for(i = 0; i<3; i++){
		printf("%d ", i+1);
		for(j = 0; j<5; j++){
			mtz[i][j] = 0;
			printf("[%d]", mtz[i][j]);
		}
		printf("\n");
	}
}

int n1,n2;

void reservarAssento(int mtz[3][5]){
	mtz[n1 - 1][n2 - 1] = 1;
}

int main(){
	setlocale(LC_ALL, "");
	
	int i, j, opc;
	int mtz[3][5];
	float vlr[3]; 
	
	for(i=0; i<3; i++){
		do{
			printf("Digite o valor do ingresso da sessao %d: ", i+1);
			scanf("%f", &vlr[i]);
		}while(vlr[i]<=0);
	}
	
	system("cls");
	
	iniciar(mtz, i, j);

	do{
		printf("\n=== Menu === \n\n1 - Mostrar mapa de assentos \n2 - Reservar assento \n3 - Cancelar reserva \n4 - Mostrar resumo das sessoes \n0 - Encerrar\n\nSELECIONE SUA OPCAO: ");
		scanf("%d", &opc);
		
		switch(opc){
		case 1:			
		
			printf("   1  2  3  4  5\n");
				for(i = 0; i<3; i++){
					printf("%d ", i+1);
					for(j = 0; j<5; j++){
						if(mtz[n1][n2] == 0){
							printf("[%d]", mtz[i][j]);
						}else{
							printf("[%d]", mtz[i][j]);
						}
					} printf("\n");
				}
		
			break;
		case 2:
			printf("\nSelecione o assento desejado [linha,coluna]: ");
			scanf("%d,%d",&n1,&n2);
			if (n1 < 1 || n1 > 3 || n2 < 1 || n2 > 5)
			{
				printf("Assento invalido!\n");
				break;
			}
			system("cls");
			if(mtz[n1 - 1][n2 - 1] == 0)
				reservarAssento(mtz);
			else
				printf("Assento ja reservado!");
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
		default:
			break;
		}
	}while(opc!=0);
	
}
