#include <stdio.h>
int main() {
   int i, moy, somme;
   int tab[10];
   printf("Entrez vos 10 notes\n\n");
   for (i = 0; i < 10; i++){
   printf(" Entrez votre notes:\n");
      scanf("%d", &tab[i]);
 }
   somme = 0;
   for (i = 0; i < 10; i++)
      somme = somme + tab[i];
   moy=somme/(10);
   printf("La moyenne de vos notes est: %d",moy);
   return (0);
}
