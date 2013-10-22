#ifndef GRAMMAIRE_H_INLCUS
#define GRAMMAIRE_H_INLCUS

#define CHMAX	80 /* Dimension max d'une lgine du fichier */
#define NUMMAX	10 /* Nombre de règles de production */

/* Grammaire */
typedef struct
{
  char nom[CHMAX];		/* Nom de la fractale */
  char axiome[CHMAX];		/* Axiome */
  int num;			/* Nombre de règles de production */
  char regle[NUMMAX][CHMAX-3];	/* Tableau des parties droites des règles */
  char car[NUMMAX];		/* Tableau des parties gauches des règles */
  int long_regle[NUMMAX];	/* Longueur des parties droites des règles */
  int turtle_dir_max;		/* Nombre de directions possibles pour la tortue */
  int turtle_dir_init;		/* Direction initiale */
} Grammaire;


void grammaire_lire(char *nomfic, Grammaire *g);
void grammaire_afficher(Grammaire g);
int grammaire_trouver(Grammaire *g, char cmd);

#endif
