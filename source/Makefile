IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11

ODIR= obj
LDIR =../lib

LIBS=-lm

_DEPS = Predio.h Objeto.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = teste/testePredio.o Predio.o Objeto.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testaPredio: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
