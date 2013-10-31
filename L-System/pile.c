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
  if (pile == NULL){
    printf("Erreur : Allocation mémoire impossible.\n");
    exit(1);
  }
  pile->x = t.x;
  pile->y = t.y;
  pile->dir = t.dir;
  pile->suc = p;

  return (pile);
}

Pile pile_depiler(Pile p, Tortue *t)
{
  Pile pile;

  if (pile == NULL)
    {
      printf("Erreur : Suppression impossible.\n");
      exit(1);
    }

  pile = t->x;
  t->x = t->x->suc;
  free(pile->x);

  pile = t->y;
  t->y = t->y->suc;
  free(pile->y);

  pile = t->dir;
  t->dir = t->dir->suc;
  free(pile->dir);

  free(pile);

  return (pile);
}

void liberer_pile(Pile p)
{
  free(p);
}

/* void pile_afficher(Pile p) */
/* { */
/*   int i = 0; */

/*   if (p == NULL) */
/*     { */
/*       printf("La pile est vide.\n"); */
/*       exit(0); */
/*     } */
/*   else */
/*     { */
/*       while (!(p->suc)) */
/*      { */
/*        printf("X : %f, Y : %f et Direction : %d", */
/*               ptr->x[i], ptr->y[i], ptr->dir[i]); */
/*        i++; */
/*      } */
/*       if ((p->null) == NULL) */
/*      { */
/*        printf("Fin de liste.\n"); */
/*        exit(0); */
/*      }   */
/*     } */
/* } */

void pile_afficher(Pile p)
{
  Pile *ptr;

  if (p == NULL)
    {
      printf("La pile est vide.\n");
      exit(0);
    }
  else
    {
      ptr = p->suc;
      while(ptr != NULL)
        {
          printf("X: %f, Y: %f, Direction: %d", p->x, p->y, p->dir);
          ptr = p->suc;
        }
      if(ptr == NULL)
        printf("X: %f, Y: %f, Direction: %d", ptr.x, ptr.y, ptr.dir);
    }
  exit(0);
}
