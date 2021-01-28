#include <stdio.h>
int  main(){
	
	int Note [10],i,somme,moyenne;
    somme=0;
	moyenne=0;
	for (i=0 ; i<10;i=i+1){
		printf("Entrez votre note\n",i);
		scanf("%d", &Note [i]);
	}
	printf("la somme de vos notes est %d\n",&somme);
	printf("\n");
	
	}
