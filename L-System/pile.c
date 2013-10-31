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

void pile_liberer(Pile p)
{
  Tortue *t;
  
  if (p != NULL)
  {
    while ( ! (pile_vide(p)))
      pile_depiler(p, &t);
    free(p);
    p = NULL;
  }
}
