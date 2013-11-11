<<<<<<< HEAD
PGM = programme
OBJS = grammaire.o  inter.o  lsys.o  pile.o  tools.o  tortue.o

# Rien à modifier à partir d'ici a priori

=======
>>>>>>> parent of a7314aa... Modification MakeFile
CC = gcc
OBJS = grammaire.o  inter.o  lsys.o  pile.o  tools.o  tortue.o
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS =
PGM = programme

all: $(PGM)

$(PGM): $(OBJS)
	$(CC) -o $(PGM) $(OBJS) $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $<

depend:
	makedepend *.c

clean:
	rm -f $(PGM)

k
