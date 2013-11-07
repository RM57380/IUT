#include <stdlib.h>
#include <malloc.h>

#include "pile.h"

Pile pile_initialiser(Pile_Cellule *pile)
{
  pile->x = 0;
  pile->y = 0;
  pile->dir = 0;

  return (pile);
}

int pile_vide(Pile p)
{
  if (p == NULL)
    return (1);
  return (0);
}

Pile pile_empiler(Pile p, Tortue *t)
{
  Pile pile;

  pile = (Pile) malloc(sizeof(Pile_Cellule));
  if (pile == NULL)
    {
      printf("Erreur : Allocation mémoire impossible.\n");
      exit(1);
    }
  pile->x = t->x;
  pile->y = t->y;
  pile->dir = t->dir;
  pile->suc = p;

  return (pile);
}

Pile pile_depiler(Pile p, Tortue *t)
{
  Pile pile = p;

  if (pile == NULL)
    {
      printf("Erreur : Suppression impossible.\n");
      exit(1);
    } 
  else
    {
      t->x = pile->suc->x;
      t->y = pile->suc->y;
      t->dir = pile->suc->dir;
      pile = pile->suc;
      free(p);
    }
  return (pile);

  /* Pile pile;

  /* if (pile == NULL) */
  /*   { */
  /*     printf("Erreur : Suppression impossible.\n"); */
  /*     exit(1); */
  /*   } */

  /* pile = t->x; */
  /* t->x = t->x->suc; */
  /* free(pile->x); */

  /* pile = t->y; */
  /* t->y = t->y->suc; */
  /* free(pile->y); */

  /* pile = t->dir; */
  /* /\* Avant chang = t->dir = t->dir->suc *\/ */
  /* t->dir = t->dir->suc; */
  /* free(pile->dir); */

  /* free(pile); */

  return (pile);
}

void liberer_pile(Pile p)
{
  free(p);
}

void pile_afficher(Pile p)
{
  Pile ptr = p;
  if (p == NULL)
    {
      printf("La pile est vide\n");
      exit(0);
    }
  else
    {
      while (ptr->suc != NULL)
	{
	  printf("Les coordonnées de x est %f\n", ptr->x);
	  printf("Les coordonnées de y est %f\n", ptr->y);
	  printf("La direction de la Tortue est %d\n", ptr->dir);
	  ptr = ptr->suc;
	}
    }

  /* Pile *ptr; */

  /* if (p == NULL) */
  /*   { */
  /*     printf("La pile est vide.\n"); */
  /*     exit(0); */
  /*   } */
  /* else */
  /*   { */
  /*     *ptr = p->suc; */
  /*     while(ptr != NULL) */
  /*       { */
  /*         printf("X: %f, Y: %f, Direction: %d", p->x, p->y, p->dir); */
  /*         /\* Ajout de & devant *\/ */
  /*         ptr = &p->suc; */
  /*       } */
  /*     if(ptr == NULL) */
  /*       printf("X: %f, Y: %f, Direction: %d", ptr->x, ptr->y, ptr->dir); */
  /*   } */
  /* exit(0); */
}
