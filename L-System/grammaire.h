#ifndef _GRAMMAIRE_H_
#define _GRAMMAIRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CARAC 80                    /* Dimension max d'une ligne de fichier */
#define MAX_REGLE 10                    /* Nombre max de regles */

typedef struct
{
  char titre[MAX_CARAC];               /* Nom de la grammaire */
  int  nb_dir;                         /* Nombre de direction */
  char axiome[MAX_CARAC];              /* Axiome de la grammaire */
  char regle[MAX_CARAC][MAX_REGLE];    /* Tableau de la partie droite */
  char car[MAX_CARAC];                 /* Tableau de la partie gauche */
  int  long_regle[MAX_CARAC];          /* Taille de la regle */
  int  turtle_dir_max;                 /* Nombre de direction maximal de la tortue */
  int  turtle_dir_init;                /* Direction initiale de la tortue */
  
}Grammaire;

void grammaire_lire(char *nomfic, Grammaire *g);
void grammaire_afficher(Grammaire g);
int  grammaire_trouver(Grammaire *g, char cmd);
 
#endif
