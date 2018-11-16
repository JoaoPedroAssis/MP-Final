IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)


ODIR= obj
LDIR =../lib

LIBS=-lm

_DEPS = Head.h GeraRecursos.h Player.h Objeto.h Predio.h Unidade.h Fabrica.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Objeto.o Player.o teste/testePlayer.o GeraRecursos.o Predio.o Fabrica.o Unidade.o teste/testeGeraRecursos.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
