#pragma once
#include "Objeto.h"

class Unidade : public Objeto {
public:
    Unidade() : Objeto() {}
    void anda();
    void ataca();
    void mudaImagem();
    void destroy();
    ~Unidade(){}

    Unidade(int vida) : vida(vida) {}

    Unidade(char *imagem, int pos_X, int pos_Y, int vida, int velocidade, int dano);


protected:
    int vida;
    int velocidade;
    int dano;
};
