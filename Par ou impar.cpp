#include <stdio.h>
#include <math.h>

int main(){
	int resto,num;
  	
	printf ("digite um numero e descubra se e par ou impar ");
	scanf("%d", &num);
	
	resto = num % 2;
	
	if (resto == 0){
		printf("Seu numero e par");
	}
	else{
		printf("Seu numero e impar");
	}
	
}
