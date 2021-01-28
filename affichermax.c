#include <stdio.h>
int main(){
	float A,B,Max;
	A=B=Max=0;
	printf("Donner la valeur de A\n");
	scanf("%f",&A);
	printf("Donner la valeur de B\n");
	scanf("%f",&B);
	if(A>B)
	Max=A;
	else
	Max=B;
printf("Le Max est %f\n",A,B,Max);
}