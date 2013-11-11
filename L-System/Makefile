PGM = programme
OBJS = grammaire.o  inter.o  lsys.o  pile.o  tools.o  tortue.o

# Rien à modifier à partir d'ici a priori

CC = gcc
CFLAGS = -c -ansi -pedantic -Wall -g
LDFLAGS = -o $(PGM)

all: $(PGM)

$(PGM): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -lm

.c.o:
	$(CC) $(CFLAGS) $<

depend:
	makedepend *.c

clean:
	rm -f $(OBJS) $(PGM)


