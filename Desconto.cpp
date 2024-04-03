#include <stdio.h>
#include <math.h>

int main (){
	float preco, desconto, pfinal;
	
	printf("Digite o preco do seu produto, para ver se tem direito a desconto ");
	scanf("%f", &preco);
	
	if(preco >= 100){
		desconto = preco * 10/100;
		pfinal = preco - desconto;
		printf("Voce recebeu um desconto. Valor do produto:R$ %.1f", pfinal);
	}
	else{
		printf("Voce nao teve direito a desconto. Valor do produto:R$ %.1f",preco);
	}
	
	
}
