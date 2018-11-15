IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11

ODIR= obj
LDIR =../lib

LIBS=-lm

_DEPS = Fabrica.h Objeto.h Predio.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = teste/testeFabrica.o Fabrica.o Objeto.o Predio.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testeFabrica: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
