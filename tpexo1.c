#include <stdio.h>
int main(){
	int i , j , tmp , index =0;
	int tab[50];
	/*saisie des valeur*/
	printf("Entrez 10 valeurs \n\n");
    for (i = 0; i < 10; i++){
    	printf(" Entrez la valeur suivante:\n");
    	scanf("%d", &tab[i]);
    }
    for (i = 0; i < 10; i++){
    	printf("%d",tab[i]);
    }
    for (i=0; i < (10-1); i++){
     	index = i;
   
        for (j=i + 1; j < 10; j++){
        	if (tab[index] > tab[j])
        		index = j;
    }
    if (index != i){
    	tmp = tab[i];
        tab[i] = tab[index];
        tab[index] = tmp;
    }
    }
    printf("\n\n");
    printf("\n******** tableau trier par ordre croissant ********\n");
    printf("\n");
    for (i=0; i < 10; i++){
    	printf("%d", tab[i]);
    }
 
  return 0;
}   