int main(int ac, char **av)
{
  Grammaire *g;

  grammaire_lire(av[1], g); 
  grammaire_lire(g);

  return (0);
}
