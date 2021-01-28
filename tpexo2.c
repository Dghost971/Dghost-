#include <stdio.h>
int main(){
	int i , j , tmp ;
	int tab[50];
	/*saisie des valeur*/
	printf("Entrez 15 valeurs \n\n");
    for (i = 0; i < 15; i++){
    	printf(" Entrez la valeur suivante:\n");
    	scanf("%d", &tab[i]);
    }
    for (i = 0; i < 15; i++){
    	printf("%d",tab[i]);
    }
    for(i=1;i<=15-1;i++){
        j=i;
        while(j>0 && tab[j-1]>tab[j]){
            tmp=tab[j];
            tab[j]=tab[j-1];
            tab[j-1]=tmp;
            j--;
        }
    }
    printf("\n\n");
    printf("\n******** tableau trier par ordre croissant ********\n");
    printf("\n");
    for (i=0; i < 15; i++){
        printf("%d", tab[i]);
    }
 
  return 0;
}