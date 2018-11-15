IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11

ODIR= obj
LDIR =../lib

LIBS=-lm

_DEPS = Objeto.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = teste/testeObjeto.o Objeto.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testaFabrica: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
