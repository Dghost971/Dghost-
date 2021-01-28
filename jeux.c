#include <stdio.h>
#include <math.h>
int diff(int n1,int n2){
	return fabs(n1-n2);
}
int main(){
int n1=0,n2=0,i;
printf("Joueur 1 entrez votre nombre compris entre 0 et 100 ; a l'abris du regard de l'autre joueur\n");
scanf("%d",&n1);
printf("le nombre que vous avez entrer est %d\n",n1);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("Joueur 2 a vous!\n");
printf("Essayez de deviner le nombre entrez par le joueur 1 \n");
/*scanf("%d",&n2);
printf("la difference est de %d",diff(n1,n2));*/
for(i=0;i<5;i++){
    scanf("%d",&n2);
    if((diff(n1,n2)<5)&&(diff(n1,n2)>1)){
    printf("Tu brules !!!\n");
    }
    else if ((diff(n1,n2)>5)&&(diff(n1,n2)<20)){
        printf("Tu chauffes !!!\n");
    }
    else if ((diff(n1,n2)>20) && (diff(n1,n2)<30)){
        printf("C est tiede ...\n");
    }
    else if(diff(n1,n2)>30){
        printf("C est froid\n");
    }
    else if(n2==n1){
        printf("Bien joueur vous avez trouver le bon nombre !\n");
        printf("Voila le nombre choisi par le joeur 1 : %d",n1);
        return 0;
    }     
}       
}




