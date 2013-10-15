#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int parser_grammaire(char *fichier)
{
  FILE *fichier_config;
  char nom_grammaire[MAX];
  int nb_directions;
  int direction_init;
  char axiome[MAX];

  fichier_config = fopen(fichier, "r");
  if (fichier_config == NULL)
    {
      printf("Ouverture impossible de %s\n", fichier);
      return (1);
    }

  while (fscanf(fichier_config, "%s\n%d\n%d\n", nom_grammaire, &nb_directions, &direction_init, axiome) != EOF)
    printf("OK\n");
  return (0);
}

int main(int ac, char **av)
{
  parser_grammaire(av[1]);
  return (0);
}
