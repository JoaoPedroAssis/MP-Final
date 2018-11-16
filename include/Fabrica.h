#pragma once
#include "Predio.h"

class Fabrica : public Predio {
public:
    Fabrica() : Predio() {}
    void geraUnidade();
    ~Fabrica();

    Fabrica(char *imagem, int pos_X, int pos_Y, int vida) : Predio(imagem, pos_X, pos_Y, vida) {}

    Fabrica(char *imagem, int pos_X, int pos_Y, int vida, int tempoEspera, int nivel, int tipo);

protected:
    int tempoEspera;
    int nivel;
    int tipo;
};