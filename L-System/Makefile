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