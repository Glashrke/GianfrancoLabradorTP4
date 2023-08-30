#include <stdio.h>
#include <stdlib.h>
int mayormenor(int A,int B){
    if(A>B){
		printf("A es mayor a B \n");
	}
	else if(B>A){
		printf("B es mayor a A \n");
	}
	else{
		printf("A y B son iguales \n");
	}
}

int main() {
    int A,B;
	printf("Ingrese A \n");
	scanf("%d",&A);
	printf("Ingrese B \n");
	scanf("%d",&B);
    mayormenor(A,B);
	
    return 0;
}
