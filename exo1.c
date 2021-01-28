 #include <stdio.h>
 main()
 {
  float V;
  /* initialisation de V */;
  V=0;
  /* lecture de V */
  printf(" Entrez votre vitesse en km.h\n");
  scanf("%f",&V);
  /* calcul de la vitesse*/;
  V=V*3.6;
  printf("Votre vitesse en m.s est de %0.2f\n ",V);
 }
