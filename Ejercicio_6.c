#include <stdio.h>
#include <stdlib.h>
int eightpar(float ve){
    float va = 0;
  	va = ve/8;
	printf("La octava parte de su valor entero es: %.2f", va);

}
int main() {
    float va, ve;
	printf("Ingrese el valor entero para obtener su 8va parte\n");
	scanf("%f",&ve);
    eightpar(ve);
    return 0;
}
