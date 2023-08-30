#include <stdio.h>
#include <stdlib.h>
float presion(float f, float s){
    float p = 0;
    p = f/s;
  	printf("La presión es: %.2f \n",p);
    
}

int main (){
	float p,s,f;
	printf("Ingrese la superficie\n");
	scanf("%f",&s);
	printf("Ingrese la fuerza\n");
	scanf("%f",&f);
	system("pause");
	
	presion(f,s);
}
