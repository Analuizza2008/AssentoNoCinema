#include <stdio.h>

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
int main(){
	int i, j, opc;
	int mtz[3][5];
	float vlr[3]; 
	
	iniciar(mtz[3][5], i, j);
	
	printf("   1  2  3  4  5\n");
	for(i = 0; i<3; i++){
		printf("%d ", i+1);
		for(j = 0; j<5; j++){
			mtz[i][j] = 0;
			printf("[%d]", mtz[i][j]);
		}
		printf("\n");
	}

	
	
	printf("=== Menu === \n1 - Mostrar mapa de assentos \n2 - Reservar assento \n3 - Cancelar reserva \n4 - Mostrar resumo das sessões \n0 - Encerrar: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:			
			break;
		case 2:
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
	
}
