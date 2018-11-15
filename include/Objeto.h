#pragma once
#include "Objeto.h"

class Objeto {
public:
    Objeto();

    Objeto(char *imagem, int pos_X, int pos_Y);

    char* imagem;
    void render();

    ~Objeto();

protected:
    int pos_X;
    int pos_Y;

};
