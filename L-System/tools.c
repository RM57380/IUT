#include "tools.h"

/* Fonction permettant de gérer dynamiquement la mémoire */
char *tools_nouvelle_chaine(int length)
{
  char *chaine = NULL;

  chaine = calloc(length, sizeof(char));
  if (chaine == NULL)
    printf("Erreur : Allocation mémoire impossible\n");

  return (chaine);
}
