#pragma once
#include "Objeto.h"

class Predio : public Objeto {
public:
    Predio() : Objeto() {}

    Predio(char *imagem, int pos_X, int pos_Y, int vida);

    Predio(int vida);

    void destroy();
    ~Predio();


protected:
    int vida;
};

