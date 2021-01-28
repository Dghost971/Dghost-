#include <stdio.h>
int main(){
	float Vitesse;
	Vitesse=0;
	printf("Entrez votre vitesse\n");
	scanf("%f",&Vitesse);
	if(Vitesse<50){
		printf("Attention: Votre vitesse est trop lente et peut provoquer des accidents");
	}
	else if ((Vitesse>50) && (Vitesse<90)){
		printf("Votre vitesse est bonne,bon voyage");
	}
	else if(Vitesse>90){
		printf("Danger!!!: vitesse excessive: Ralentissez!!!");
	}
	
}
	