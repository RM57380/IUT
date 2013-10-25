#include "grammaire.h"
int main(int ac, char **av)
{
  Grammaire g;

  grammaire_lire(av[1], &g);
  grammaire_afficher(g);
  
  return (0);
}
