CC = gcc
OBJS = grammaire.o main.o
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

