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
	
	for(i=0; i<3; i++){
		do{
			printf("Digite o valor do ingresso da sessao %d: ", i+1);
			scanf("%f", &vlr[i]);
		}while(vlr[i]<=0);
	}
	
	iniciar(mtz[3][5], i, j);
	
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
