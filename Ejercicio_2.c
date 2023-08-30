#include <stdio.h>
#include <stdlib.h>
int peri (int L,int H){
    int P=0;
	P = L*H;
	printf("El perimetro de su rectangulo es: %d \n",P);
}
int area(int L,int H){
    int A=0;
    A = 2*(L+H);
	printf("El area de su rectangulo es: %d \n",A);	
}

int main (){
	int P,A,H,L;
    printf("ingrese el ancho del rectangulo: \n");
	scanf("%d",&L);
    printf("ingrese la altura del rectangulo: \n");
	scanf("%d",&H);

    peri(L,H);
    area(L,H);
	system("CLS");


	system("pause");
    return 0;
}
