#include <stdio.h>
#include <stdio.h>
#include <math.h>
// Função que faz o calculo da area e perimetro
void calcula_hexagono(float i,float *area, float *perimetro){
*area =((3 * pow(i,2)) * sqrt(3))/2;
*perimetro = 6 * i;
// Impressão dos resultados
 printf("Area %.1f \nPerimetro %.1f\n", *area,  *perimetro);
}

int main (){
	float lado = 0, *area, *perimetro;
	//Usuario digitara os dados
	printf("Informe o tamanho do lado: ");
	scanf("%f", &lado);
	//Chama-se a função para calcular
	calcula_hexagono(lado, &area, &perimetro);

	return(0);
}