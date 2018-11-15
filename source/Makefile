IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)


ODIR= obj
LDIR =../lib

LIBS=-lm

_DEPS = GeraRecursos.h Head.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = teste/testeGeraRecursos.o GeraRecursos.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
