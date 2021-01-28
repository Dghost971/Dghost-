#include <stdio.h>
int main(){
int n=0,n2=0;
printf("Joueur 1 entrez votre nombre compris entre 0 et 100 ; a l'abris du regard de l'autre joueur\n");
scanf("%d",&n);
printf("le nombre que vous avez entrer est %d\n",n);
printf("Joueur 2 a vous!\n");
printf("Essayez de deviner le nombre entrez par le joueur 1 \n");
scanf("%d",&n2);
if(n2>n){
    printf("Dommage c'était plus petit !!\n");
}
else if (n2<n){
    printf("C'était plus grand\n");
}
else if(n2==n){
    printf("Bien joueur vous avez trouver le bon nombre !\n");
}
printf("Voila le nombre choisi par le joeur 1 : %d",n);
}