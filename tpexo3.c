#include <stdio.h>
int main(){
	int i , j , tmp ;
	int tab[50];
	/*saisie des valeur*/
	printf("Entrez 15 valeurs \n\n");
    for (i = 0; i < 5; i++){
    	printf(" Entrez la valeur suivante:\n");
    	scanf("%d", &tab[i]);
    }
    for (i = 0; i < 5; i++){
    	printf("%d",tab[i]);
    }
    for (i=0;i<5-1;i++){
        for(j=0;j<5-i-1;j++){
            if(tab[j]>tab[j+1]){
                tmp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=tmp;
            }
        }
    }
    printf("\n\n");
    printf("\n******** tableau trier par ordre croissant ********\n");
    printf("\n");
    for (i=0; i < 5; i++){
        printf("%d", tab[i]);
    }
 
  return 0;
}