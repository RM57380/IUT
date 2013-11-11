CC = gcc
OBJS = inter.o  grammaire.o lsys.o  pile.o  tools.o  tortue.o
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS =
PGM = programme

all: $(PGM)

$(PGM):	$(OBJS)
	$(CC) -o $(PGM) $(OBJS) $(LDFLAGS) -lm

.c.o:
	$(CC) $(CFLAGS) $<

depend:
	makedepend *.c

clean:
	rm -f $(PGM)

# DO NOT DELETE

grammaire.o: grammaire.h /usr/include/stdlib.h /usr/include/features.h
grammaire.o: /usr/include/stdc-predef.h /usr/include/alloca.h
grammaire.o: /usr/include/stdio.h /usr/include/libio.h
grammaire.o: /usr/include/_G_config.h /usr/include/wchar.h
grammaire.o: /usr/include/string.h /usr/include/xlocale.h
inter.o: /usr/include/string.h /usr/include/features.h
inter.o: /usr/include/stdc-predef.h /usr/include/xlocale.h
inter.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
inter.o: /usr/include/wchar.h /usr/include/stdlib.h /usr/include/alloca.h
inter.o: /usr/include/math.h inter.h /usr/include/limits.h tortue.h pile.h
inter.o: grammaire.h
lsys.o: /usr/include/string.h /usr/include/features.h
lsys.o: /usr/include/stdc-predef.h /usr/include/xlocale.h
lsys.o: /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h
lsys.o: /usr/include/wchar.h /usr/include/stdlib.h /usr/include/alloca.h
lsys.o: /usr/include/math.h inter.h /usr/include/limits.h tortue.h pile.h
lsys.o: grammaire.h
pile.o: /usr/include/stdlib.h /usr/include/features.h
pile.o: /usr/include/stdc-predef.h /usr/include/alloca.h
pile.o: /usr/include/malloc.h /usr/include/stdio.h /usr/include/libio.h
pile.o: /usr/include/_G_config.h /usr/include/wchar.h pile.h tortue.h
tools.o: tools.h /usr/include/stdio.h /usr/include/features.h
tools.o: /usr/include/stdc-predef.h /usr/include/libio.h
tools.o: /usr/include/_G_config.h /usr/include/wchar.h /usr/include/stdlib.h
tools.o: /usr/include/alloca.h /usr/include/string.h /usr/include/xlocale.h
tortue.o: /usr/include/math.h /usr/include/features.h
tortue.o: /usr/include/stdc-predef.h /usr/include/stdlib.h
tortue.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
tortue.o: /usr/include/_G_config.h /usr/include/wchar.h tortue.h
