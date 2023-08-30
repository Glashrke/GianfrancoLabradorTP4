#include <stdio.h>
#include <stdlib.h>
int shownumbers(int num1,int num2){
    printf("Los numeros ingresados son: \n %d \n %d \n",num1,num2);

}

int main (){
    int num1,num2;
    printf("ingrese un numero: \n");
    scanf("%d",&num1);
    printf("ingrese otro numero: \n");
    scanf("%d",&num2);
    system("CLS");
    shownumbers(num1,num2);
    system("pause");
}

