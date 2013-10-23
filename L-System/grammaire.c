#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "grammaire.h"

void grammaire_lire(char *nomfic, Grammaire *g)
{
  FILE *pfo;
  pfo=fopen(nomfic, "r");

  /* Vérification de l'ouverture du fichier */
  if(pfo == NULL)
    {
      printf("Ouverture du fichier %s impossible\n", nomfic);
      exit(2);
    }

  /* Lecture du nom de la fractale */
  fscanf(pfo, "%s\n", g->nom);
  
  /* Lecture du nombre de directions */
  fscanf(pfo, "%d\n", &(g->turtle_dir_max));

  /* Lecture de la diretion initiale */
  fscanf(pfo, "%d\n", &(g->turtle_dir_init));

  /* Lecture de l'axiome */
  fscanf(pfo, "%s\n", g->axiome);

  /* Aucune règle au départ */
  g->num=0 ;

  /* Lecture des règles de production */
  while (fscanf(pfo, "%c->%s\n", &g->car[g->num], g->regle[g->num]) != EOF)
    {
      /* Calcul de la longueur de la partie droite de la règle */
      g->long_regle[g->num] = strlen(g->regle[g->num]);
      
      /* Il y a maintenant une règle de plus... */
      g->num++;

      /* Le fichier est traité, on le ferme */
      fclose(pfo);
    }
}

void grammaire_afficher(Grammaire g)
{
  printf("Nom de la grammaire : %s\n", g.nom);
  printf("Nombre de directions : %d\n", g.turtle_dir_max);
  printf("Direction initiale : %d\n", g.turtle_dir_init);
  printf("Axiome : s\n", g.axiome);
  
  int i = 0;
  while (i < 4)
    {
      printf("Règles de production %d : ", i+1);
	printf("%c->%s\n", g.car[i], g.regle[i]);
      i++;
    }
}
