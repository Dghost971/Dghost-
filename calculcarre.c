#include <stdio.h>
int main(){
	float A,carre;
	A=0,carre=0;
	printf("Entrer votre nombre\n");
	scanf("%f",&A);
	carre=A*A;
	printf("Le carre de votre nombre est %0.2f",carre);
}