
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
    printf("Allocation mémoire impossible...\n");
    exit(1);
  }
  pile->x = t.x;
  pile->y = t.y;
  pile->dir = t.dir;
  pile->suc = p;

  return (pile);
}
