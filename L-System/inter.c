#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "inter.h"
#include "tortue.h"
#include "pile.h"

/* Interpretation graphique : dessin de la chaîne générée */
void inter_interpreter(Interprete *inter, float factor, Tortue *tortue, char *nom_fichier)
{
  int i;
  float x, y, xprec, yprec;
  char cmd;
  Pile p;
  FILE *fp;

  /* Initialisations générales */
  p = pile_initialiser();
  fp = fopen(nom_fichier, "w");

  if (!fp)
    {
      printf("Impossible d'ouvrir le fichier %s...\n", nom_fichier);
      exit(4);
    }

  /* Initialisation du fichier SVG */
  fputs("<?xml version=\"1.0\" standalone=\"no\" ?>\n", fp);
  fputs("<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"", fp);
  fputs(" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n", fp);
  fputs("<svg width=\"100%\" height=\"100%\" version=\"1.1\"", fp);
  fputs(" xmlns=\"http://www.w3.org/2000/svg\">\n", fp);
  fputs("  <svg stroke=\"black\">\n", fp);

  /* Dessin des segments */

  x = factor * (tortue->x - inter->xmin);
  y = factor * (tortue->y - inter->ymin);

  for (i = 0; i < inter->taille; i++)
    {
      cmd = inter->mot[i];
      p = inter_transition(p, cmd, tortue);
      xprec = x;
      yprec = y;
      x = factor * (tortue->x - inter->xmin);
      y = factor * (tortue->y - inter->ymin);

      if (cmd == 'F')
        fprintf(fp, "    <line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\"/>\n",
                xprec, yprec, x, y);
    }

  /* Fermeture du fichier SVG */
  fputs("  </svg>\n", fp);
  fputs("</svg>\n", fp);
  fclose(fp);

  /* Toujours pour le cas où... */
  pile_liberer(p);
}

void inter_init(Interprete *inter)
{
  inter->mot = NULL;
  inter->taille = 0;
  inter->xmin = 0;
  inter->ymin = 0;
  inter->xmax = 0;
  inter->ymax = 0;
}

int inter_generer(int niveau_max, Grammaire *g, Interprete *t)
{
  int i = 0;
  t->mot = g->axiome;
  
  while (i < niveau_max)
    {
      i++;
    }
}

void inter_nettoyer(Interprete *inter)
{
  int j = 0;
  int k = 0;
  char i = inter->mot[j];
  char nmot[inter->taille];

  while (i != '\0')
    {
      if(i == 'F' || i == 'f' || i == '+'
         || i == '-' || i == '[' || i == ']')
        {
          nmot[k] = i;
          k++;
          j++;
        }
      j++;
    }
  inter->mot = nmot;
}

void inter_calc_dim(Interprete *inter, Tortue *tortue)
{
  Tortue *t = tortue;
}

Pile inter_transition(Pile p, char cmd, Tortue *tortue)
{
  return (p);
}

void inter_liberer(Interprete *inter)
{
  inter_init(inter);
}
