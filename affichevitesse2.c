#include <stdio.h>
int main(){
float vitesse;
 vitesse=0;
 printf("Entrez votre vitesse\n");
 scanf("%f",&vitesse);
while(vitesse<0){
printf("Entrez votre vitesse\n");
scanf("%f",&vitesse);
}
 if (vitesse<50){
 printf("Votre vitesse est trop faible cela peut causer des accident\n");
}
 else if ((vitesse>50) && (vitesse<90)){
 printf("Votre vitesse est bonne : bon voyage\n");
}
 else if (vitesse>90){
 printf("Danger:votre vitesse est trops élever: Ralentissez!!!\n");
}
}
